from collections import Counter,deque
for _ in range(int(input())):
    n=int(input())
    l=sorted(list(map(int,input().split())))
    f=sorted(dict(Counter(l)).items(),key=lambda x:(x[0]))
    f=sorted(f,key=lambda x:x[1],reverse=True)
    ans=""
    for i in range(len(f)):
        for j in range(f[i][1]):
            ans+=str(f[i][0])+" "
    print(ans)
            
            
    
    
