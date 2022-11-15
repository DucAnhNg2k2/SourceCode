import math
t = int(input())
#t = 1

isPrime = []
def sangnt():
    for i in range(0,1000005,1):
        isPrime.append(True)
    isPrime[0] = False
    isPrime[1] = False
    for i in range(0,1000005,1):
        if(isPrime[i] == True):
            for j in range(i*i,1000005, i):
                isPrime[j] = False
    
def solve():
    x = int(input())
    dem = 0
    for i in range(0,x-5,1):
        if(isPrime[i] and isPrime[i+4] and isPrime[i+6]):
            dem += 1
        elif(isPrime[i] and isPrime[i+2] and isPrime[i+6]):
            dem += 1
    print(dem)

sangnt()
for i in range(1,t+1):
   solve()
