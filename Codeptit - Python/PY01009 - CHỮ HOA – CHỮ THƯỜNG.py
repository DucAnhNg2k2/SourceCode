# t = int(input())
t = 1

def solve():
    x = input()
    dem1 = 0
    dem2 = 0
    for i in range(0,len(x)):
        if(x[i].islower()):
             dem1 += 1
        else:
             dem2 += 1
    if(dem1 >= dem2):
        print(x.lower())
    else:
        print(x.upper())
for i in range(1,t+1):
    solve()
