lprime=[0]*(10**4+5)
def lprimef(n):
    lprime[1]=1
    for i in range(2,n+1):
        if lprime[i]==0:
            lprime[i]=i
            for j in range(2*i,n+1,i):
                if lprime[j]==0:
                    lprime[j]=i

lprimef(10**4+3)
for _ in range(int(input())):
    z=int(input())
    print(*lprime[1:z+1])
    
    
