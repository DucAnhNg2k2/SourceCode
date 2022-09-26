# t = int(input())
t = 1

def solve() :
    n = int(input())
    array = []
    for i in range(1,n+1):
        ans = ""
        str = input().lower()
        for j in range(0,len(str)):
            if((str[j] >= 'a' and str[j] <= 'z') or (str[j] >= '0' and str[j] <= '9')):
                ans += str[j]
            else:
                if(ans != ""):
                    array.append(ans)
                    ans = ""
        if(ans != ""):
            array.append(ans)

    ans = []
    for i in range(0,len(array)):
        check = True
        for j in range(0,i):
            if(array[i] == array[j]):
                check = False
                break
        if(check):
            dem = 0
            for j in range(0,len(array)):
                if(array[j] == array[i]):
                    dem += 1
            ans.append([array[i],dem])

    for i in range (0,len(ans)):
        for j in range (i+1,len(ans)):
            if((ans[i][1] < ans[j][1]) or (ans[i][1] == ans[j][1] and ans[i][0] > ans[j][0])):
                t = ans[i]
                ans[i] = ans[j]
                ans[j] = t

    for i in range (0,len(ans)):
        print(ans[i][0],end=" ")
        print(ans[i][1])

for i in range(1,t+1):
    solve()
