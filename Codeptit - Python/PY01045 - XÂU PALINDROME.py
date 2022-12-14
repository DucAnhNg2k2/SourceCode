import math

# t = int(input())
t = 1

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
    n = len(input())
    if (n == 1):
        print(1)
    else:
        print(n-1)


for i in range(1,t+1):
    solve()
