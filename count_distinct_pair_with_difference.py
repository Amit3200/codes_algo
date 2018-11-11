def countsto(arr,n,k):    
    c=0
    r=1
    l=0
    arr.sort()
    while r<n:
        if r==l:
            r+=1
        elif (arr[r]-arr[l])==k:
            c+=1
            l+=1
            r+=1
            try:
                while(arr[r]==arr[l]):
                    r+=1
                    l+=1
            except:
                if r==n:
                    break
        elif(arr[r]-arr[l])>k:
            l+=1
        else:
            r+=1
    return c
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    k=int(input())
    print(countsto(l,n,k))
