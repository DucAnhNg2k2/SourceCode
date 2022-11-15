import math
#t = int(input())
t = 1

def solve():
    s = [int(i) for i in input().split()]
    a = s[0]
    k = s[1]
    n = s[2]

    i = 1
    dem = 0
    while( True ):
        num = k * i
        if(num > n):
            break
        if(num - a > 0):
            print(num - a, end=" ")
            dem += 1
        i += 1
    if(dem == 0):
        print(-1)
    else:
        print()  
for i in range(1,t+1):
    solve()
