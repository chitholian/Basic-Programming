#  save_to:530 - Binomial Showdown.py
while True:
    a, b = map(int, input().split())
    if a == 0:
        break
    up, down = 1, 1
    for i in range(1, min(b, a - b) + 1):
        down *= i
        up *= (a - i + 1)
    print(up // down)
