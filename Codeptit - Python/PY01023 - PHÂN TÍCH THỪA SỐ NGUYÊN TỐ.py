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

def check(n,k):
    num = n
    dem = 0
    while(n > 0):
        num = num * 10 + n % 10
        n //= 10
        dem += 2
    if(dem % 2 == 0 and num < k):
        print(num, end = " ")
        return True
    return False

def solve():
    n = int(input())
    i = 2
    ans = "1 * "
    while(i*i <= n):
        if(n%i == 0):
            dem = 0
            while(n%i == 0):
                dem += 1
                n //= i
            ans += str(i) + "^" + str(dem) + " * "
        i += 1
    if(n > 1):
        ans += str(n) + "^1 * "  
    res = ""
    for i in range(0,len(ans)-2,1):
        res += ans[i]
    print(res)
for i in range(1,t+1):
    solve()
