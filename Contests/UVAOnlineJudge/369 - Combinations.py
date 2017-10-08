while True:
    d = input().split()
    a, b = int(d[0]), int(d[1])
    if a == 0 and b == 0:
        break
    c = min(b, a - b)
    top = 1
    for i in range(1, c + 1):
        top *= i
    bottom = 1
    for i in range(a, a - c, -1):
        bottom *= i
    res = bottom // top
    print(a, "things taken", b, "at a time is", res, "exactly.")
