while True:
    try:
        a = int(input())
        b = 1
        for i in range(a, 0, -1):
            b *= i
        print(a, end="")
        print("!")
        print(b)
    except EOFError:
        break
