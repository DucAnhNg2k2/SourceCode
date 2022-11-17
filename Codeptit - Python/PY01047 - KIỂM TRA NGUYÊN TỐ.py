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

def solve() :
    x = input()
    n = 0
    for i in range(len(x)-4,len(x),1):
        n = n*10 + int(x[i])
    if(isPrime(n)):
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
   solve()
