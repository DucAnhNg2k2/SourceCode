import math
t = int(input())
#t = 1

def solve():
    s = [float(i) for i in input().split()]
    n = s[0]
    x = s[1]
    m = s[2]

    dem = 0
    while(n <= m):
        dem += 1
        n = n + n * x / 100
    print(dem)  
for i in range(1,t+1):
    solve()
