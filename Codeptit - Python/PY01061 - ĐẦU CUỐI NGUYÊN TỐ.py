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
    s = input()
    n = len(s)
    str1 = s[n-3] + s[n-2] + s[n-1]
    str2 = s[0] + s[1] + s[2]
    if(isPrime(int(str1)) and isPrime(int(str2))):
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
    solve()
