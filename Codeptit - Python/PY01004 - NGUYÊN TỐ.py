import math

t = int(input())
# t = 1

def gcd(a,b):
    while(a*b != 0):
        if(a > b):
            a %= b
        else:
            b %= a
    return a + b

def isPrime(n):
    if(n < 2):
        return False
    i = 2
    while(i*i <= n):
        if(n%i == 0):
            return False
        i += 1
    return True

def solve():
    n = int(input())
    dem = 0
    for i in range(1,n+1,1):
        if(gcd(i,n) == 1):
            dem += 1
    if(isPrime(dem)):
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
    solve()
