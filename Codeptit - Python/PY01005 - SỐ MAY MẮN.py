# t = int(input())
t = 1

def solve():
    x = input()
    dem = 0
    for i in range(0,len(x)):
        if(x[i] == '4' or x[i] == '7'):
            dem += 1
    if(dem == 4 or dem == 7):
        print("YES")
    else:
        print("NO")
for i in range(1,t+1):
    solve()
