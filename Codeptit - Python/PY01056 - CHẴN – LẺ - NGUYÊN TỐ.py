import math
t = int(input())
# t = 1

def isPrime(n):
    if(n < 2):
        return False
    i = 2
    while(i == n):
        if(n%i == 0):
            return False
        i += 1
    return True

def solve():
    x = input()
    check = True
    sum = 0
    for i in range(0,len(x),1):
        if(i%2 == 0 and int(x[i])%2 == 1):
            check = False
        if(i%2 == 1 and int(x[i])%2 == 0):
            check = False
        sum += int(x[i])
    if(isPrime(sum) == False):
        check = False
    if(check):
        print('YES')
    else:
        print('NO')
 
for i in range(1,t+1):
    solve()