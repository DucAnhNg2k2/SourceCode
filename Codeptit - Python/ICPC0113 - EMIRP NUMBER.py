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
    
for i in range(1,t+1):
    x = int(input())
    for i in range(0,x,1):
        n = i
        tmp = n
        check = True
        s = 0
        sum = 0
        while(n > 0):
            du = n%10
            n //= 10
            s = s * 10 + du
        if(isPrime(tmp) and isPrime(s) and s != tmp and tmp < x and s < x and tmp < s ):
            print(tmp, end = " ")
            print(s, end = " ")
    print()
