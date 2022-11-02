import math
from tokenize import Double

t = 1
# t = int(input())

def solve() :
    str1 = input()
    str2 = input()
    p = int(input())
    for i in range(0,p-1):
        print(str1[i],end = "")
    for i in range(0,len(str2)):
        print(str2[i],end = "")
    for i in range(p-1,len(str1)):
        print(str1[i],end = "")

for i in range(1,t+1):
    solve()
