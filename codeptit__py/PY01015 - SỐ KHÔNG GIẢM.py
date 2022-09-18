import math

t = int(input())

def solve() :
    str = input()
    for i in range(0,len(str)-1):
        if(str[i] > str[i+1]):
            print("NO")
            return
    print("YES")

for i in range(1,t+1):
    solve()
