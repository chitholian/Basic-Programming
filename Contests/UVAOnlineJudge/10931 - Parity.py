while True:
    a = int(input())
    if a == 0:
        break
    n = []
    cnt = 0
    while a != 0:
        b = a % 2
        n.append(b)
        if b == 1:
            cnt += 1
        a //= 2
    print("The parity of", end=" ")
    for i in range(n.__len__() - 1, -1, -1):
        print(n[i], end="")
    print(" is", cnt, "(mod 2).")
