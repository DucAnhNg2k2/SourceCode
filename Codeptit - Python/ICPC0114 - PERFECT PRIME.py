import math
t = int(input())
#t = 1

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
    check = True
    if(isPrime(n) == False):
        check = False
    s = 0
    sum = 0
    while(n > 0):
        du = n%10
        n //= 10
        s = s * 10 + du
        sum += du
        if(isPrime(du) == False):
            check = False
    if(isPrime(s) == False or isPrime(sum) == False):
        check = False
    if(check):
        print("Yes")
    else:
        print("No")
for i in range(1,t+1):
    solve()
