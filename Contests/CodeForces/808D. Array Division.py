a = int(input())
nums = [int(i) for i in input().split()]
tot = sum(nums)


def runner(lpr):
    total = 0
    used = {}
    for i in range(*lpr):
        used[nums[i]] = 1
        total += nums[i]
        distance = 2 * total - tot
        if distance % 2 == 0 and used.get(distance // 2, -1) != -1:
            print("YES")
            exit(0)


runner((0, a))
runner((a - 1, -1, -1))
print("NO")
