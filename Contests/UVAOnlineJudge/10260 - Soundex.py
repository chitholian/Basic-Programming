############################
# Atikur Rahman Chitholian #
#     CSE 2015 - 2016      #
# University of Chittagong #
############################

# save_to:10260 - Soundex.py
import sys
I = sys.stdin.readline


def P(output, br=True):
    sys.stdout.write(str(output))
    if br:
        sys.stdout.write("\n")


# Solution Begins
mp = {'B': 1, 'F': 1, 'P': 1, 'V': 1, 'C': 2, 'G': 2, 'J': 2, 'K': 2, 'Q': 2,
      'S': 2, 'X': 2, 'Z': 2,  'D': 3, 'T': 3, 'L': 4, 'M': 5, 'N': 5, 'R': 6}


def solve():
        #global mp
    while True:
        try:
            s = str(I())
            if s == "":
                break
            cp = -1
            for i in s:
                cr = mp.get(i, -2)

                if cr == -2:
                    cp = -1
                elif cr != cp:
                    P(cr, False)
                    cp = cr
            P("")
        except EOFError:
            break
# Solution Ends

cases = 1
while cases != 0:
    cases -= 1
    solve()
