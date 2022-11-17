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
    check = True
    dem = 0
    if(isPrime(len(x)) == False):
        check = False
    for i in range(0,len(x),1):
        if(isPrime(int(x[i]))):
            dem += 1
        else:
            dem -= 1
    if(dem <= 0):
        check = False
    if(check):
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
   solve()
