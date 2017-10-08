c = 0
while True:
    c += 1
    s = input()
    if s == "*":
        break
    print("Case", c, end="")
    if s[0] == 'H':
        print(": Hajj-e-Akbar")
    else:
        print(": Hajj-e-Asghar")
