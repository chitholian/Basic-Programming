import timeit


def knapsack(m, w, p):
    n = len(w)
    profit = 0
    r = [(0, 0) for i in range(n)]
    s = [0 for i in range(n)]
    for i in range(n):
        r[i] = (p[i] / w[i], i)
    r = sorted(r, key=None, reverse=True)
    for j in range(n):
        y, i = r[j]
        s[i] = min(m, w[i])
        m -= s[i]
        s[i] = s[i] / w[i]
        profit += s[i] * p[i]
    return profit, s


if __name__ == '__main__':
    print("Enter weights : ")
    w = [int(i) for i in input().split()]
    print("Enter prices : ")
    p = [int(i) for i in input().split()]
    print("Enter knapsack size : ")
    m = int(input())
    t = timeit.default_timer()
    pro, mass = knapsack(m, w, p)
    t = timeit.default_timer() - t
    print("Answer : ", pro)
    for i in range(len(w)):
        print(mass[i], end=' ')
    print("\n Time elapsed : ", t)
