t = int(input())
# t = 1

def solve():
    s = input().split()[0]
    for i in range(0,len(s)-1,1):
        if(s[i] > s[i+1]):
            print('NO')
            return
    print('YES')

for i in range(1,t+1):
    solve()
