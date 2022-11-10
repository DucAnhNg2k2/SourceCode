# t = 1
t = int(input())

def solve():
    [n,d] = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    d %= n
    for i in range(d,len(a)):
        print(a[i],end=" ")
    for i in range(0,d):
        print(a[i],end=" ")
    print()

for i in range(1,t+1):
    solve()