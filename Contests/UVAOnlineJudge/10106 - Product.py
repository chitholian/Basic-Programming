while True:
    try:
        a, b = int(input()), int(input())
        print(a * b)
    except EOFError:
        break
