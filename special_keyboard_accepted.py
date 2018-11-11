for _ in range(int(input())):
    z=int(input())
    if z>75:
        print(-1)
    else:
        a=[0 for i in range(z+1)]
        for i in range(0,n+1):
            if i<=6:
                a[i]=i
        for i in range(7,n+1):
            a[i]=max(2*a[i-4]+a[i-4],3*a[i-5]+a[i-5])
        print(a[n])
