import math
t = int(input())
#t = 1

def reverse(n):
    s = 0
    while(n > 0):
        s = s*10 + n%10
        n //= 10
    return s

def isPrime(n):
    if(n < 2):
        return False
    i = 2
    while(i*i <= n):
        if(n%i == 0):
            return False
        i += 1
    return True

def sumDigit(n):
    s = 0
    while(n > 0):
        s += n%10
        n //= 10
    return s

def solve() :
    x = int(input())
    for i in range(1,1001,1):
        if(x%7 == 0):
            print(x)
            return
        x = x + reverse(x)
    print(-1)

for i in range(1,t+1):
   solve()
