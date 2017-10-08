t = int(input())
c = 1
for i in range(t):
    a = [int(k) for k in input().split()]
    print("Case", c, end=": ")
    if a[0] < 0 or a[1] < 0 or a[2] < 0 or a[0] + a[1] <= a[2] or a[0] + a[2] <= a[1] or a[2] + a[1] <= a[0]:
        print("Invalid")
    elif a[0] == a[1] == a[2]:
        print("Equilateral")
    elif a[0] == a[1] or a[2] == a[1] or a[0] == a[2]:
        print("Isosceles")
    else:
        print("Scalene")
    c += 1
