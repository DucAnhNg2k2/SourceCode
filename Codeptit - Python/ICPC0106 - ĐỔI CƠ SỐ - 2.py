
t = int(input())
# t = 1

def solve():
    b = int(input())
    s = input()
    dem = 0
    sum = 0
    for i in range(len(s)-1,-1,-1):
        if(s[i] == '1'):
            sum += pow(2,dem)
        dem += 1
    ans = ''
    while(sum > 0):
        a = sum%b
        if(a >= 10):
            if(a == 10):
                ans += 'A'
            if(a == 11):
                ans += 'B'
            if(a == 12):
                ans += 'C'
            if(a == 13):
                ans += 'D'
            if(a == 14):
                ans += 'E'
            if(a == 15):
                ans += 'F'
        else:
            ans += str(a)
        sum //= b
    
    res = ''
    for i in range(len(ans)-1,-1,-1):
        res += ans[i]
    print(res)

for i in range(1,t+1):
    solve()
