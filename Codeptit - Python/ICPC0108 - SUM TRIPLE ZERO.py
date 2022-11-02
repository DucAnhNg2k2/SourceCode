# t = 1
t = int(input())

def solve():
    n = int(input())
    a = sorted([int(x) for x in input().split()])
    dem = 0
    for i in range(0,n-2):
        l = i+1
        r = len(a)-1
        x = a[i]
        while l < r:
            if x + a[l] + a[r] == 0:
                dem += 1
                l += 1
            elif x + a[l] + a[r] < 0:
                l += 1
            else:
                r -= 1
    print(dem)

for i in range(1,t+1):
    solve()