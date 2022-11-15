import math
# t = int(input())
t = 1

p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
  
for i in range(1,t+1):
    while( True ):
        x = input()
        if( x == "0"):
            break
        [k, str] = x.split()
        ans = ""
        for i in range(0,len(str),1):
            for j in range(0,len(p),1):
                if(p[j] == str[i]):
                    ans += p[(j+int(k))%28]
                    break
        for i in range(len(ans)-1,-1,-1):
            print(ans[i],end="")
        print()
