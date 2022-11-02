import math
from tokenize import Double


t = int(input())

def solve() :
    str = input()
    str = " ".join(str.split())
    str = str.split(" ")
    n = float(str[0])
    x = float(str[1])/100
    m = float(str[2])
    month = math.log(m/n,1+x)
    if(month == int(month)):
        print(month)
    else:
        print(int(month+1))

for i in range(1,t+1):
    solve()
