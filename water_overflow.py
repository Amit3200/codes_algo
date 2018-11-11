def findWater(i,j,X):
    if j>i:
        print(-1)
        return
    g=[0]*int(i*(i+1)/2)
    index=0
    g[index]=X
    for row in range(1,i):
        for col in range(1,row+1):
            X=g[index]
            g[index]=1.0 if (X>=1.0) else X
            X=(X-1) if X>=1.0 else 0.0
            g[index+row]+=(X/2)
            g[index+row+1]+=(X/2)
            index+=1
    return g[int(i*(i-1)/2+j-1)]


for _ in range(int(input())):
    K=int(input())
    i=int(input())
    j=int(input())
    print(findWater(i,j,K))
             
