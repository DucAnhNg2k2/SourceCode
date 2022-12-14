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
    test = 10
    n = []
    while(test > 0):
        a = [int(x) for x in input().split()]
        for i in range(0,len(a),1):
            n.append(a[i])
        test -= len(a)

    cnt = []
    for i in range(0,100,1):
        cnt.append(False)
    for i in range(0,len(n),1):
        cnt[n[i]%42] = True       
    dem = 0
    for i in range(0,100,1):
        if(cnt[i]):
            dem += 1
    print(dem)
for i in range(1,t+1):
    solve()
