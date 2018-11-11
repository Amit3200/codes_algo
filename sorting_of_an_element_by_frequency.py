from collections import Counter,deque
for _ in range(int(input())):
    n=int(input())
    l=sorted(list(map(int,input().split())))
    f=sorted(dict(Counter(l)).items(),key=lambda x:(x[1],x[0]),reverse=True)
    o=[]
    d=[]
    try:
        for i in range(len(f)):
            if f[i][1]==f[i+1][1]:
                d.append(f[i])
            elif f[i][1]!=f[i+1][1]:
                d.append(f[i])
                o.append(sorted(d,key=lambda x:x[0]))
                d=[]
    except:
        d.append(f[i])
        o.append(sorted(d,key=lambda x:x[0]))
    po=[]
    for i in o:
        for k in i:
            po.append(k)
    #print(po)
    s=""
    for i in range(len(po)):
        for k in range(po[i][1]):
            s+=str(po[i][0])+" "
    print(s)
    
    
