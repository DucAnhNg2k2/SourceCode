t = int(input())
# t = 1

def solve():
    s = input()
    ans = 100000000000000000000000000000000000
    num = ''
    for i in range(0,len(s)):
        if(s[i].isdigit()):
            num += s[i]
        else:
            if(num != '' and ans > int(num)):
                ans = int(num)
            num = ''
    print(ans)

for i in range(1,t+1):
    solve()
