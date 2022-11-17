import math
t = int(input())
#t = 1
  
def gcd(a,b):
    while(a*b != 0):
        if(a >= b):
            a %= b
        else:
            b %= a
    return a + b

def solve():
    s = int(input())
    n = s
    num = 0
    while(s > 0):
        num = num * 10 + s % 10
        s //= 10
    if(gcd(num,n) == 1):
        print("YES")
    else:
        print("NO")
for i in range(1,t+1):
   solve()
