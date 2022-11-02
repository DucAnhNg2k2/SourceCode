
# t = 1
t = int(input())

def solve():
  [p, q] = input().split()
  s1 = input().strip()
  if(s1.count(' ')):
    s1,s2 = s1.split()
  else:
    s2 = input().strip()
  a = min(p,q)
  b = max(p,q)
  print(int(s1.replace(b,a)) + int(s2.replace(b,a)),end=" ")
  print(int(s1.replace(a,b)) + int(s2.replace(a,b)))

for i in range(1,t+1):
    solve()
