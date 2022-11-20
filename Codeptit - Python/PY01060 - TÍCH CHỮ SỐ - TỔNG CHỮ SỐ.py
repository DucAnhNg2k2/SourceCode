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

def mulDigit(n):
    s = 1
    while(n > 0):
        if(n%10 != 0):
            s *= n % 10
        n //= 10
    return s

def solve() :
    x = input()
    tich = 1
    tong = 0
    for i in range(0,len(x),1):
        if(i%2 == 0):
            if(int(x[i]) != 0):
                tich *= int(x[i])
        else:
            tong += int(x[i])
    print(tich, end = " ")
    print(tong)

for i in range(1,t+1):
   solve()
