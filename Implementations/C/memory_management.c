/*******************************************************\
* Assignment number                : 07                 *
* Date of receiving assignment     : 2018-04-01         * 
* Date of submitting assignment    : 2018-05-18         * 
*  Name                            : Atikur Rahman      * 
*  J = 11                                               * 
*  K = 11                                               * 
*  L = 28                                               * 
*  M = 14                                               * 
*  N = 64                                               * 
*  Problem number: 10                                   * 
*   (Memory Management schemes: FIRST FIT, BEST FIT).   *
\*******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define constants.
#define J 11
#define K 11
#define L 28
#define N 64
#define FILE_IN "input_file_for_mm.in"
#define FILE_OUT_FF "output_file_for_ffmm.out"
#define FILE_OUT_BF "output_file_for_bfmm.out"

FILE *input_file, *output_file;
int i, j, k;
long long total_hole_size, total_process_size, total_unallocated;
// Structure to hold a hole-info.
struct HOLE
{
    int total, available;
};
// Declare required function prototypes.
int generateInput();
int runFirstFit();
int runBestFit();
// Entry of execution.
int main(int argc, char **argv)
{
    // Make sure input generation was successful.
    if (generateInput() == 0)
    {
        if (runFirstFit() != 0)
            fprintf(stderr, "Warning! First Fit returned non-zero status.\n");
        if (runBestFit() != 0)
            fprintf(stderr, "Warning! Best Fit returned non-zero status.\n");

        printf("\n\t<===0===0===>\n Task complete, summary written to the output files:"
               "\n\t1. \"%s\",\n\t2. \"%s\".\n",
               FILE_OUT_FF, FILE_OUT_BF);
    }
    else
    {
        fprintf(stderr, "Error! Cannot generate input, exiting.\n");
        return 1;
    }
    return 0;
}

// Function to generate input data.
int generateInput()
{
    // Set seed for random.
    srand((unsigned)time(NULL));
    // open input_file in writing mode.
    input_file = fopen(FILE_IN, "w");

    // generate N inputs.
    printf("Generating %d input data.\n", N);
    for (i = 0; i < N; ++i)
    {
        printf("Iteration %d of %d running...\n", i + 1, N);

        // Generate K number of memory holes with random size from 5 x ‘L’ to 35 x ‘L’.
        printf("Generating %d memory holes with random size from %d to %d... ", K, 5 * L, 35 * L);
        for (j = 0; j < K; ++j)
        {
            int size = ((rand() % 31) + 5) * L;
            fprintf(input_file, "%d ", size);
        }
        fprintf(input_file, "\n"); // put an EOL.
        printf("Done.\n");

        // Generate J number of processes with random size from 10 x ‘L’ to 20 x ‘L’.
        printf("Generating %d processes with random size from %d to %d... ", J, 10 * L, 20 * L);
        for (j = 0; j < J; ++j)
        {
            int size = ((rand() % 11) + 10) * L;
            fprintf(input_file, "%d ", size);
        }
        fprintf(input_file, "\n\n"); // put a blank line meaning "end of current input".
        printf("Done.\n");
        printf("Iteration %d complete.\n", i + 1);
    }

    // close input_file.
    fclose(input_file);
    printf("Input generation complete.\n");
    return 0;
}

// function to test First Fit scheme.
int runFirstFit()
{
    printf("Running First Fit scheme.\n0%%.");
    // open input_file in reading mode.
    input_file = fopen(FILE_IN, "r");
    // open output_file in writing mode.
    output_file = fopen(FILE_OUT_FF, "w");
    // initialize all stats to zero.
    total_hole_size = total_process_size = total_unallocated = 0;
    // run N times.
    for (i = 1; i <= N; ++i)
    {
        struct HOLE holes[K];
        int process;
        // input K memory holes.
        for (j = 0; j < K; j++)
        {
            // input total size.
            fscanf(input_file, "%d", &holes[j].total);
            // set total size to available.
            holes[j].available = holes[j].total;

            total_hole_size += holes[j].total;
        }
        // input J processes and map to holes.
        fprintf(output_file, "=========== Iteration %2d =============\n", i);
        fprintf(output_file, "%-5s\t%-8s\t%-8s\t%-10s\t%-8s\n", "PID", "P_SIZE", "HOLE_ID", "HOLE_SIZE", "AVAILABLE");
        fprintf(output_file, "------------------------------------------\n");

        for (j = 1; j <= J; j++)
        {
            fscanf(input_file, "%d", &process);
            total_process_size += process;

            fprintf(output_file, "%-5d\t%-8d\t", j, process);
            // Search in K holes to fit the process.
            short fitted = 0;
            for (k = 0; k < K; k++)
            {
                // if process fits, map to it.
                if (holes[k].available >= process)
                {
                    holes[k].available -= process;
                    fprintf(output_file, "%-8d\t%-10d\t%-8d\n", k + 1, holes[k].total, holes[k].available);
                    fitted = 1;
                    break;
                }
            }
            if (!fitted)
            {
                fprintf(output_file, "=> NOT ALLOCATED\n");
                total_unallocated++;
            }
        }

        fprintf(output_file, "\n");
        printf("\r%d%%.", i * 100 / N);
    }
    printf("\nWriting summary... ");
    fprintf(output_file, "\n\n========== Summary ==========\n");
    fprintf(output_file, "Average Process Size : %.2f\n", total_process_size * 1.0 / (N * J));
    fprintf(output_file, "Average Hole Size    : %.2f\n", total_hole_size * 1.0 / (N * K));
    fprintf(output_file, "Average unallocated  : %.2f%%.\n", total_unallocated * 100.0 / (N * J));
    // close files.
    fclose(input_file);
    fclose(output_file);
    printf("Done.\n");
    return 0;
}

// function to test Best Fit scheme.
int runBestFit()
{
    printf("Running Best Fit scheme.\n0%%.");
    // open input_file in reading mode.
    input_file = fopen(FILE_IN, "r");
    // open output_file in writing mode.
    output_file = fopen(FILE_OUT_BF, "w");
    // initialize all stats to zero.
    total_hole_size = total_process_size = total_unallocated = 0;
    // run N times.
    for (i = 1; i <= N; ++i)
    {
        struct HOLE holes[K];
        int process;
        // input K memory holes.
        for (j = 0; j < K; j++)
        {
            // input total size.
            fscanf(input_file, "%d", &holes[j].total);
            // set total size to available.
            holes[j].available = holes[j].total;

            total_hole_size += holes[j].total;
        }
        // input J processes and map to holes.
        fprintf(output_file, "=========== Iteration %2d =============\n", i);
        fprintf(output_file, "%-5s\t%-8s\t%-8s\t%-10s\t%-8s\n", "PID", "P_SIZE", "HOLE_ID", "HOLE_SIZE", "AVAILABLE");
        fprintf(output_file, "------------------------------------------\n");

        for (j = 1; j <= J; j++)
        {
            fscanf(input_file, "%d", &process);
            total_process_size += process;

            fprintf(output_file, "%-5d\t%-8d\t", j, process);
            // Search all K holes to fit the process.
            short fitted = 0;
            int min_size = 0xfffffff, min_hole;
            for (k = 0; k < K; k++)
            {
                // if process fits, store best option.
                if (holes[k].available >= process && holes[k].available < min_size)
                {
                    min_size = holes[k].available;
                    min_hole = k;
                    fitted = 1;
                }
            }
            if (fitted)
            {
                holes[min_hole].available -= process;
                fprintf(output_file, "%-8d\t%-10d\t%-8d\n", min_hole + 1, holes[min_hole].total, holes[min_hole].available);
            }
            else
            {
                fprintf(output_file, "=> NOT ALLOCATED\n");
                total_unallocated++;
            }
        }

        fprintf(output_file, "\n");
        printf("\r%d%%.", i * 100 / N);
    }
    printf("\nWriting summary... ");
    fprintf(output_file, "\n\n========== Summary ==========\n");
    fprintf(output_file, "Average Process Size : %.2f\n", total_process_size * 1.0 / (N * J));
    fprintf(output_file, "Average Hole Size    : %.2f\n", total_hole_size * 1.0 / (N * K));
    fprintf(output_file, "Average unallocated  : %.2f%%.\n", total_unallocated * 100.0 / (N * J));
    // close files.
    fclose(input_file);
    fclose(output_file);
    printf("Done.\n");
    return 0;
}
