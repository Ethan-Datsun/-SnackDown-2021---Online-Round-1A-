# cook your dish here
for _ in range(int(input())):
    x,k = map(int,input().split())
    if(x*2<=x*k):
        MIN=x*2
    elif (x%2!=0):
        MIN=x*(x+1)
    else:
        MIN=x*(x+2)
    MAX=(x*k*(x*k-1))
    print(MIN,"",MAX)