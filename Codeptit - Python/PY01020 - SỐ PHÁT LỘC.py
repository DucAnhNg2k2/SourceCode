t = int(input())
# t = 1

def solve():
    x = input()
    if(x[len(x)-2] == '8' and x[len(x)-1] == '6'):
        print('YES')
    else:
        print('NO')
 
for i in range(1,t+1):
    solve()
