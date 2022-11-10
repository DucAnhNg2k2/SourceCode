# t = 1
t = int(input())

def solve():
    x = input()
    if(x[0] == x[len(x)-1]):
        print('YES')
    else:
        print('NO')

for i in range(1,t+1):
    solve()