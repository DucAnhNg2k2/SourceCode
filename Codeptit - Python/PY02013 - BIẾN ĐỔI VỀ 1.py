import math
# t = int(input())
#t = 1

# def reverse(n):
#     s = 0
#     while(n > 0):
#         s = s*10 + n%10
#         n //= 10
#     return s

# def isPrime(n):
#     if(n < 2):
#         return False
#     i = 2
#     while(i*i <= n):
#         if(n%i == 0):
#             return False
#         i += 1
#     return True

# def sumDigit(n):
#     s = 0
#     while(n > 0):
#         s += n%10
#         n //= 10
#     return s

# def mulDigit(n):
#     s = 1
#     while(n > 0):
#         if(n%10 != 0):
#             s *= n % 10
#         n //= 10
#     return s

# def solve() :
#     dem = 0
#     while(True):
#         if(n == 1):
#             print(dem)
#             return
#         if(n%2 == 0):
#             n //= 2
#         else:
#             n = n*3 + 1
        
while(True):
    n = int(input())
    b = []
    for i in range(0,100000,1):
        b.append(0)
    if(n == 0):
        break
    while(True):
        b[n] = 1
        if(n == 1):
            break
        if(n%2 == 0):
            n //= 2
        else:
            n = n*3 + 1
    dem = 0
    for i in range(0,100000,1):
        if(b[i] == 1):
            dem += 1
    print(dem)
