while True:
    try:
        n = int(input())
        p = (n * n + n) // 2
        print(p * p)
    except EOFError:
        break
