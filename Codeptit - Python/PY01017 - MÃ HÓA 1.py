import math
t = int(input())
#t = 1

def solve():
    s = input()
    c = ''
    dem = 0
    for i in range(0,len(s),1):
        if(c != s[i]):
            c = s[i]
            dem = 0
            while(i < len(s) and c == s[i]):
                i += 1
                dem += 1
            i -= 1
            print(dem,end="")
            print(c,end="")
    print()
        
for i in range(1,t+1):
    solve()
