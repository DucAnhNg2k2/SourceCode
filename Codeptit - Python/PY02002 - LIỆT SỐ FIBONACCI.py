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

f = []
f.append(0)
f.append(1)
f.append(1)
for i in range(3,100,1):
    f.append(f[i-1] + f[i-2])

def solve():
    a = [int(x) for x in input().split()]
    for i in range(a[0],a[1]+1,1):
        print(f[i], end = " ")
    print()

for i in range(1,t+1):
    solve()
