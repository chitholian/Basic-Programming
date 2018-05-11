#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* ********* Start sorting algorithms *************/
void insertion_sort(int *array, int len)
{
    int i, j, k;
    for (j = 2; j <= len; j++)
    {
        k = array[j];
        i = j - 1;
        while (i > 0 && array[i] > k)
        {
            array[i + 1] = array[i];
            i -= 1;
        }
        array[i + 1] = k;
    }
}

void bubble_sort(int *array, int len)
{
    int i, j, tmp;
    for(j = 1; j <= len; j++)
    {
        for(i = 1; i <= len - j; i++)
        {
            if(array[i] > array[i+1])
            {
                tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
            }
        }
    }
}

void selection_sort(int *array, int len)
{
    int i, j, k;
    for(j = 1; j <= len; j++)
    {
        int min_index = j, min_el = array[j];
        for(i = j + 1; i <= len; i++)
        {
            if(array[i] < min_el)
            {
                min_index = i;
                min_el = array[min_index];
            }
        }
        array[min_index] = array[j];
        array[j] = min_el;
    }
}

void merge(int *array, int left, int mid, int right)
{
    int LA[mid - left + 3], RA[right - mid + 2];
    LA[mid-left+2] = RA[right-mid+1] = 500005;
    int i;
    for(i=1; i<=mid-left + 1; i++)
        LA[i] = array[left+i-1];

    for(i=1; i<=right-mid; i++)
        RA[i] = array[mid+i];
    int li = 1;
    int ri = 1;

    for(i=left; i<=right; i++)
    {
        if(LA[li] < RA[ri])
            array[i] = LA[li++];
        else
            array[i] = RA[ri++];
    }
}
void merge_sort(int *array, int start, int end)
{
    if(start < end)
    {
        int mid = (start+end)/2;
        merge_sort(array, start, mid);
        merge_sort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

int divide(int *array, int l, int r)
{
    int p = array[r];
    int i = l - 1, j;
    for(j = l; j<=r-1; j++)
    {
        if(array[j] <= p)
        {
            i++;
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
    int tmp = array[i+1];
    array[i+1] = array[r];
    array[r] = tmp;
    return i + 1;
}
void quick_sort(int *array, int left, int right)
{
    if(left < right)
    {
        int p = divide(array, left, right);
        quick_sort(array, left, p - 1);
        quick_sort(array, p + 1, right);
    }
}

void counting_sort(int *array, int len)
{
    int rng = array[1], i, sorted[len+1];
    for(i = 1; i<=len; i++) if(rng < array[i]) rng = array[i];
    int freq[rng+1];
    for(i = 0; i <= rng; i++)
        freq[i] = 0;
    for(i = 1; i<=len; i++)
        freq[array[i]]++;
    for(i=1; i<=rng; i++)
        freq[i]+=freq[i-1];

    for(i = len; i>=1; i--)
    {
        sorted[freq[array[i]]] = array[i];
        freq[array[i]]--;
    }
    for(i = 1; i<= len; i++) array[i] = sorted[i];
}

int heap;
void heapify(int *arr, int root)
{
    int largest = root;
    int l = 2 * root;
    int r = l + 1;
    if(l <= heap && arr[l] > arr[largest])
        largest = l;
    if(r <= heap && arr[r] > arr[largest])
        largest = r;
    if(largest != root)
    {
        int tmp = arr[largest];
        arr[largest] = arr[root];
        arr[root] = tmp;
        heapify(arr, largest);
    }
}
void heap_sort(int *arr, int len)
{
    int i;
    heap = len;
    for(i = len/2; i>=1; i--)
        heapify(arr, i);
    for(i = len; i>=2; i--)
    {
        int tmp = arr[i];
        arr[i] = arr[1];
        arr[1] = tmp;
        heap--;
        heapify(arr, 1);
    }
}

void sub_radix_sort(int *array, int len, int exp)
{
    int sorted[len + 1], count[10], i;
    for(i = 0; i <= 9; i++)
        count[i] = 0;
    for(i = 1; i<=len; i++)
        count[(array[i]/exp)%10]++;
    for(i = 1; i<=9; i++)
        count[i] += count[i - 1];
    for(i = len; i>=1; i--)
    {
        sorted[count[(array[i]/exp)%10]] = array[i];
        count[(array[i]/exp)%10]--;
    }
    for(i = 1; i<=len; i++)
        array[i] = sorted[i];

}
void radix_sort(int *array, int len)
{
    int mx = array[0], i;
    for(i = 1; i<=len; i++)
        if(mx < array[i]) mx = array[i];
    for(i = 1; mx/i>0; i*=10)
        sub_radix_sort(array, len, i);
}
/* ******* End of algorithms *********/

int main()
{
    time_t t;
    int i, j, k, len, ADV, T, AL, DS;
    FILE *input, *output, *result;
    while(1)
    {
        while(1)
        {
            printf("Select a sorting algorithm:\n");
            printf("\t1. Bubble Sort\n");
            printf("\t2. Insertion Sort\n");
            printf("\t3. Selection Sort\n");
            printf("\t4. Merge Sort\n");
            printf("\t5. Quick Sort\n");
            printf("\t6. Counting Sort\n");
            printf("\t7. Radix Sort\n");
            printf("\t8. Heap Sort\n");
            printf("\t0. Exit\n");
            scanf("%d", &AL);
            if(AL < 0 || AL > 8)
                printf("Please select a correct option.\n");
            else break;
        }
        if(AL == 0) return 0;
        printf("Enter Number of Tests: ");
        scanf("%d", &T);
        printf("Enter Incremental Factor: ");
        scanf("%d", &ADV);
        printf("Enter Number of Data Sizes: ");
        scanf("%d", &DS);

        clock_t clocks, times[T+1][DS+1];
        for(j = 1; j <= T; ++j)
        {
            // fprintf(result, "\nTest: %d\n", j);
            printf("\nTest %d ...", j);
            //   fprintf(result, "\tSize (n) : Time (CPU Clocks)\n");
            len = 0;
            for(k = 0; k <= DS; ++k)
            {
                // Generate len random integers
                srand(time(&t));
                output = fopen("numbers.txt", "w");
                printf("\n\nGenerating %d random integers...", len);
                for(i = 1; i<=len; i++) fprintf(output, "%d\n", rand() % 500000);
                fclose(output);

                // Input random numbers
                input = fopen("numbers.txt", "r");
                int nums[len + 1];
                for(i = 1; i<=len; i++) fscanf(input, "%d\n", &nums[i]);
                fclose(input);

                printf("\nSorting...");
                switch(AL)
                {
                case 1:
                    result = fopen("bubble.json", "w");
                    clocks = clock();
                    bubble_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 2:
                    result = fopen("insertion.json", "w");
                    clocks = clock();
                    insertion_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 3:
                    result = fopen("selection.json", "w");
                    clocks = clock();
                    selection_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 4:
                    result = fopen("merge.json", "w");
                    clocks = clock();
                    merge_sort(nums, 1, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 5:
                    result = fopen("quick.json", "w");
                    clocks = clock();
                    quick_sort(nums, 1, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 6:
                    result = fopen("counting.json", "w");
                    clocks = clock();
                    counting_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 7:
                    result = fopen("radix.json", "w");
                    clocks = clock();
                    radix_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                case 8:
                    result = fopen("heap.json", "w");
                    clocks = clock();
                    heap_sort(nums, len);
                    times[j][k] = clock() - clocks;
                    break;
                }

                //fprintf(result, "\t%4d : %-4ld\n", k * ADV, times[j][k]);
                // Print the sorted array
                //for(i = 1; i<=len; i++) printf("%d\n", nums[i]);
                //for(i = 1; i<=len; i++) fprintf(result, "%d\n", nums[i]);
                printf("\nCPU Clocks taken : %ld\n", times[j][k]);

                len += ADV;
            }
        }
        // Calculate average
        //fprintf(result, "\n\nAverage Values:\n");
        //fprintf(result, "\tSize (n) : Time (CPU Clocks)\n");
        printf("\n\nAverage values:\n\tSize (n) : Time (CPU Clocks)\n");
        for(i = 0; i <= DS; ++i)
        {
            clock_t total = 0;
            for(j = 1; j <= T; ++j)
                total += times[j][i];
            //fprintf(result, "\t%4d : %-4.2f\n", i * ADV, (total * 1.0 / T));
            printf("\t%7d : %-7.2lf\n", i * ADV, (double) total / T);
            fprintf(result, "{ x: %d, y: %.2lf },\n", i * ADV, (double) total / T);
        }

        fclose(result);

        int c;
        printf("\n****** Operation OK, Continue ? [1/0] : ");
        scanf("%d", &c);
        if(c != 1) break;
    }
    return 0;
}
