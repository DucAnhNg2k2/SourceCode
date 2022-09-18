import math

t = int(input())

def solve() :
    str = input()
    if str[len(str) - 2] == '8' and str[len(str) - 1] == '6':
        print("YES")
    else:
        print("NO")

for i in range(1,t+1):
    solve()
