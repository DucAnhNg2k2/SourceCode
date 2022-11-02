from ast import GtE
from lib2to3.pgen2.token import RPAR
from traceback import print_tb


t = int(input())
# t = 1

def solve():
    s = input()
    ans = ''
    for i in range(0,len(s)):
        if s[i] >= '1' and s[i] <= '9':
            for j in range(0,int(s[i]),1):
                ans += s[i-1]
    print(ans)

for i in range(1,t+1):
    solve()
