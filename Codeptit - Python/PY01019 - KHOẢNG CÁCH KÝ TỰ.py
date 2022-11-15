import math
t = int(input())
# t = 1

def solve():
    x1 = input()
    x2 = ""
    check = True
    for i in range(len(x1)-1, -1, -1):
        x2 += x1[i]
    for i in range(1,len(x1),1):
        if(abs(ord(x1[i])-ord(x1[i-1])) != abs(ord(x2[i])-ord(x2[i-1]))):
            check = False
    if(check):
        print("YES")
    else:
        print("NO")
 
for i in range(1,t+1):
    solve()
