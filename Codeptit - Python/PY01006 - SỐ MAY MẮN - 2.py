t = int(input())
# t = 1

def solve():
    x = input()
    check = True
    for i in range(0,len(x)):
        if(x[i] != '4' and x[i] != '7'):
            check = False
    if(check):
        print("YES")
    else:
        print("NO")
 
for i in range(1,t+1):
    solve()
