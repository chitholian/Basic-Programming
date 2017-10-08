import timeit


def matrix_chain_order(p):
    n = len(p) - 1
    m, s = [[0 for i in range(n + 1)] for j in range(n + 1)], [[0 for i in range(n + 1)] for j in range(n + 1)]
    for i in range(1, n + 1):
        m[i][i] = 0

    for l in range(2, n + 1):
        for i in range(1, n - l + 2):
            j = i + l - 1
            m[i][j] = 999999999999999
            for k in range(i, j):
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[j] * p[k]
                if q < m[i][j]:
                    m[i][j] = q
                    s[i][j] = k

    return m, s


num = 1


def printOut(i, j, s):
    global num
    if i == j:
        print(num, end=' ')
        num = num + 1
        return
    print("(", end="")
    printOut(i, s[i][j], s)
    printOut(s[i][j] + 1, j, s)
    print(")", end="")


if __name__ == '__main__':
    print("Enter the matrix chain in a line and press [ENTER]")
    p = [int(a) for a in input().split()]

    t = timeit.default_timer()
    m, s = matrix_chain_order(p)
    t = timeit.default_timer() - t

    print("Answer :")
    printOut(1, len(p) - 1, s)

    print("\nMSM : ", m[1][len(p) - 1])
    print("Time elapsed : ", t)
