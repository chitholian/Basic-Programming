import math

while True:
    ns = [int(i) for i in input().split()]
    if ns[1] == 0:
        break
    n = math.sqrt(ns[0]).__int__()
    cnt = 0
    while n * n <= ns[1]:
        if n * n >= ns[0]:
            cnt += 1
        n += 1
    print(cnt)
