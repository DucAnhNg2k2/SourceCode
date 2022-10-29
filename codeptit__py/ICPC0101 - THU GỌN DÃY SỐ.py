# t = int(input())
t = 1

def solve():
    n = int(input())
    str = input()
    arr = str.split() # array
    a = []
    for i in range(0,len(arr)):
        if len(a) == 0 :
            a.append(arr[i])
        elif (int(a[len(a)-1]) + int(arr[i])) %2 == 0:
            a.pop()
        else:
            a.append(arr[i])
    print(len(a))
for i in range(1,t+1):
    solve()
