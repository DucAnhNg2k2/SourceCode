import math
from tokenize import Double

t = int(input())
# t = 1

def solve() :
    N = int(input())
    a = []
    cnt = []
    for i in range(0,1005):
        cnt.append(0)
    for i in range(1,N+1):
        x = int(input())
        a.append(x)
        cnt[x] += 1

    dem = 0
    val = 10000

    for i in range(0,len(a)):
        if(dem < cnt[a[i]]):
            dem = cnt[a[i]]
            val = a[i]
        if(dem == cnt[a[i]]):
            if(val >= a[i]):
                val = a[i]
    print(val)

for i in range(1,t+1):
    solve()
