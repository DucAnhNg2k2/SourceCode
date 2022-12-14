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
    n = input()
    l = []
    r = []
    for i in range(0,20,1):
        l.append(False)
        r.append(False)
    l[0] = True
    r[len(n)-1] = True
    for i in range(1,len(n),1):
        if(n[i] > n[i-1] and l[i-1] == True):
            l[i] = True
    for i in range(len(n)-2,0,-1):
        if(n[i] > n[i+1] and r[i+1] == True):
            r[i] = True
    for i in range(0,len(n),1):
        if(l[i] == True and r[i] == True and len(n) >= 3):
            print("YES")
            return
    print("NO")

for i in range(1,t+1):
    solve()
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
    n = input()
    l = []
    r = []
    for i in range(0,20,1):
        l.append(False)
        r.append(False)
    l[0] = True
    r[len(n)-1] = True
    for i in range(1,len(n),1):
        if(n[i] > n[i-1] and l[i-1] == True):
            l[i] = True
    for i in range(len(n)-2,0,-1):
        if(n[i] > n[i+1] and r[i+1] == True):
            r[i] = True
    for i in range(0,len(n),1):
        if(l[i] == True and r[i] == True and len(n) >= 3):
            print("YES")
            return
    print("NO")

for i in range(1,t+1):
    solve()
