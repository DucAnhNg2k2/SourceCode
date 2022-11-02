t = int(input())
# t = 1

def solve():
    s = input()
    if s[0] == s[len(s)-2] and s[1] == s[len(s)-1]: 
        print('YES')
    else:
        print('NO')

for i in range(1,t+1):
    solve()
