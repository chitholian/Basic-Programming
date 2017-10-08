fibs = []
a, b = 0, 1
for i in range(5001):
    fibs.append(a)
    a, b = b, a + b
while True:
    try:
        n = int(input())
        print("The Fibonacci number for", n, "is", fibs[n])
    except EOFError:
        break
