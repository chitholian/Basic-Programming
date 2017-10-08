import math

ns = [int(i) for i in input().split()]
tm = math.ceil(ns[0] / ns[2])
tm *= ns[1]
if (tm - ns[3]) > ns[1]:
    print("YES")
else:
    print("NO")
