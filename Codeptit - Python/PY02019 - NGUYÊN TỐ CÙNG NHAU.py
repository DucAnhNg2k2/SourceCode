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
    a = [int(i) for i in input().split()]
    a.sort()
    for i in range(0,len(a),1):
        for j in range(i+1,len(a),1):
            if(gcd(a[i],a[j]) == 1):
                print(str(a[i]) + " " + str(a[j]))
for i in range(1,t+1):
    solve()
