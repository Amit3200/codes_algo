for _ in range(int(input())):
    K=int(input())
    r=int(input())
    c=int(input())
    a=[[0 for i in range(r+2)] for j in range(r+2)]
    a[0][0]=K
    for i in range(0,r):
        for j in range(0,i+1):
                    if a[i][j]>=1:
                        p=a[i][j]
                        a[i][j]=1
                        a[i+1][j]+=(p-a[i][j])/2
                        a[i+1][j+1]+=(p-a[i][j])/2
    print(a[r-1][c-1])
