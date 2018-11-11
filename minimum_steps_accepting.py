for _ in range(int(input())):
    z=int(input())
    ans=int((2*z)**0.5)
    if ans*(ans+1)<2*d:
        ans+=1
    s=(ans*(ans+1))//2
    if (s+d)%2==0:
        print(ans)
    else:
        print(ans+1)
