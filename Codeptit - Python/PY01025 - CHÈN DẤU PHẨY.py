import math
# t = int(input())
t = 1

def solve():
    x1 = input()
    ans = ""
    dem = 0
    for i in range (len(x1)-1,-1,-1):
        dem += 1
        ans = x1[i] + ans
        if(dem%3 == 0 and i != 0):
            ans = "," + ans
            dem = 0
    print(ans)
 
for i in range(1,t+1):
    solve()
