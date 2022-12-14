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
    cnt = []
    n = input()
    dem = 0
    for i in range(0,10,1):
        cnt.append(False)
    for i in range(0,len(n),1):
        if(cnt[int(n[i])] == False):
            dem += 1
        cnt[int(n[i])] = True
    for i in range(0,len(n)-2,1):
        if(n[i] != n[i+2]):
            print("NO")
            return 
    if(dem != 2):
        print("NO")
    else:
        print("YES")


for i in range(1,t+1):
    solve()
