import math

t = int(input())

def solve() :
    str = input()
    if(str[0] == str[len(str)-2] and str[1] == str[len(str)-1]):
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
    solve()
