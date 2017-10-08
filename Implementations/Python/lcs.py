import timeit


def lcs(u, v):
    m, n = len(u), len(v)
    b, c = [[0 for i in range(n + 1)] for j in range(m + 1)], [[0 for i in range(n + 1)] for j in range(m + 1)]
    for i in range(1, m):
        for j in range(1, n):
            if u[i] == v[j]:
                c[i][j], b[i][j] = c[i - 1][j - 1] + 1, 1
            elif c[i - 1][j] >= c[i][j - 1]:
                c[i][j], b[i][j] = c[i - 1][j], 2
            else:
                c[i][j], b[i][j] = c[i][j - 1], 3
    return c, b


def printOut(b, s, i, j):
    if i == 0 or j == 0:
        return
    if b[i][j] == 1:
        printOut(b, s, i - 1, j - 1)
        print(s[i], end='')
    elif b[i][j] == 2:
        printOut(b, s, i - 1, j)
    else:
        printOut(b, s, i, j - 1)


if __name__ == '__main__':
    print("Enter two strings in one line :")
    d, e = [str(i) for i in input().split()]
    d, e = '0' + d, '0' + e
    t = timeit.default_timer()
    p, q = lcs(d, e)
    t = timeit.default_timer() - t
    print("Answer : ", p[len(d) - 1][len(e) - 1])
    printOut(q, d, len(d) - 1, len(e) - 1)
    print("\n Time elapsed : ", t)
