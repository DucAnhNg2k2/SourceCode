import math
t = int(input())
# t = 1

def solve():
    x1 = input()
    sum = 0
    check = True
    for i in range(0,len(x1),1):
        if(i > 1):
            if(abs(ord(x1[i])-ord(x1[i-1])) != 2):
                check = False
        sum += int(x1[i])
    if(sum % 10 != 0):
        check = False
    if(check):
        print("YES")
    else:
        print("NO")
 
for i in range(1,t+1):
    solve()
