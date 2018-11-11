def countsto(x,n,num):
    val=(x-num**n)
    if val==0:
        return 1
    if val<0:
        return 0
    return countsto(val,n,num+1)+countsto(x,n,num+1)

for _ in range(int(input())):
    x,n=map(int,input().split())
    print(countsto(x,n,1))
