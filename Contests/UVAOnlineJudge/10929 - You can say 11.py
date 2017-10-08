while True:
    a = input().__str__()
    if a == "0":
        break

    l = a.__len__()
    sm = 0
    for i in range(0, l, 2):
        sm += int(a[i])
    for i in range(1, l, 2):
        sm -= int(a[i])

    if (sm % 11) == 0:
        print(a, "is a multiple of 11.")
    else:
        print(a, "is not a multiple of 11.")
