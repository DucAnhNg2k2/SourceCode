import math
#t = int(input())
t = 1
  
def gcd(a,b):
    while(a*b != 0):
        if(a >= b):
            a %= b
        else:
            b %= a
    return a + b

def solve():
    [l,r] = [int(x) for x in input().split()]
    for i in range(l,r+1,1):
        for j in range(i+1,r+1,1):
            for k in range(j+1,r+1,1):
                if(gcd(i,j) == 1 and gcd(j,k) == 1 and gcd(i,k) == 1):
                    ans = "(" + str(i) + ", " + str(j) + ", " + str(k) + ")"
                    print(ans)
for i in range(1,t+1):
   solve()
