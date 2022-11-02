from ast import GtE


t = int(input())
# t = 1

def solve():
    s = input()
    sum = 0
    for i in range(0,len(s)):
        gt = 1
        for j in range(1,int(s[i])+1):
            gt *= j
        sum += gt
    if(sum == int(s)):
        print('Yes')
    else:
        print('No')

for i in range(1,t+1):
    solve()
