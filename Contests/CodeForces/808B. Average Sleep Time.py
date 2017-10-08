s = input().split()
n, k = int(s[0]), int(s[1])
sm = 0
ds = [int(i) for i in input().split()]
for i in range(n):
    sm += min(i + 1, k, n - i, n - k + 1) * ds[i]
print(sm / (n - k + 1))
