import math
from tokenize import Double

t = int(input())

def solve() :
    str1 = input()
    str2 = input()
    dem = 0
    col = 0
    for i in range (0,len(str1)):
        if(i < col):
            continue
        check = False
        for j in range(0,len(str2)):
            if(i+j >= len(str1)):
                break
            if(str2[j] != str1[i+j]):
                break
            if(j == len(str2)-1):
                check = True
        if(check):
            col = i + len(str2)
            dem += 1
    print(dem)

for i in range(1,t+1):
    solve()
