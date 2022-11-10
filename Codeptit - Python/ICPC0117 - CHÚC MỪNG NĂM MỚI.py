# t = int(input())
t = 1

def solve():
    n = int(input())
    a = []
    for i in range(0,n):
        str = input()
        a.append(str)
    print(len(set(a)))
for i in range(1,t+1):
    solve()
