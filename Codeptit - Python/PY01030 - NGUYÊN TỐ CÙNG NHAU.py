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
    str = input().split()
    dem = 0
    [n,k] = [int(str[0]), int(str[1])]
    for i in range(pow(10,k-1), pow(10,k),1):
        if(gcd(i,n) == 1):
            print(i,end =" ")
            dem += 1
            if(dem == 10):
                print()
                dem = 0

for i in range(1,t+1):
   solve()
