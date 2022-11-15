t = int(input())
# t = 1

def solve():
    x = input()
    arr = []
    for i in range(0,len(x)):
        arr.append(int(x[i]))

    for i in range(len(arr) - 1, 0, -1):
        if(arr[i] >= 5):
            arr[i-1] += 1
        arr[i] = 0

    ans = ""
    for i in range(0,len(arr)):
        ans += str(arr[i])
    print(ans)

for i in range(1,t+1):
    solve()
