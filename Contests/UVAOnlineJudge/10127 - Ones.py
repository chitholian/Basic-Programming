while True:
    try:
        a = int(input())
        b = "1"
        while (int(b) % a) != 0:
            b = b + "1"
        print(b.__len__())
    except EOFError:
        break
