t = int(input())
# t = 1

def solve():
    s = input()
    ans = 0
    num = 0
    for i in range(0,len(s)):
        if(s[i].isdigit()):
            num = num * 10 + int(s[i])
        else:
            ans = max(ans,num)
            num = 0
    ans = max(ans,num)
    print(ans)

for i in range(1,t+1):
    solve()
