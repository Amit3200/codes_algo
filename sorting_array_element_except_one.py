def sorte(arr,k,n):
    arr[k],arr[n-1]=arr[n-1],arr[k]
    l=arr[n-1]
    arr=arr[:n-1]
    arr.sort()
    arr.insert(k,l)
    return arr

for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    k=int(input())
    f=sorte(l,k,n)
    print(*f)
