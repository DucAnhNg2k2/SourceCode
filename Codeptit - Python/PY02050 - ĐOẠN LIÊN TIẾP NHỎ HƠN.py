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
    n = int(input())
    a = [int(x) for x in input().split()]
    f = []
    for i in range(0,n):
        f.append(0)
    stack = []
    for i in range(0,n):
        if(len(stack) == 0):
            f[i] = 1
            stack.append(i)
        else:
            dem = 0
            while(len(stack) >= 1 and a[i] >= a[stack[len(stack)-1]]):
                dem += f[stack[len(stack)-1]]
                stack.pop()
            stack.append(i)
            f[i] = dem + 1
    for i in range(0,n):
        print(f[i], end = " ")
    print()

for i in range(1,t+1):
    solve()
