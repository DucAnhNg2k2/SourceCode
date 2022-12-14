import math

# t = int(input())
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


while(True):
    x = [int(i) for i in input().split()]
    if(x[0] == 0 and x[1] == 0 and x[2] == 0 and x[3] == 0):
        break
    dem = 0
    while(True):
        if(x[0] == x[1] and x[1] == x[2] and x[2] == x[3]):
            print(dem)
            break
        dem += 1
        tmp = x[0]
        x[0] = abs(x[0]-x[1])
        x[1] = abs(x[1]-x[2])
        x[2] = abs(x[2]-x[3])
        x[3] = abs(x[3]-tmp)
