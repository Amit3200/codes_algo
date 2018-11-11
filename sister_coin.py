import sys
def rec(m,g,l):
    if not l or m>g:
        return 0
    elif m==g:
        return 1
    else:
        return rec(m+l[0],g-l[0],l[1:]) or rec(m,g,l[1:])
for _ in range(int(input())):
    a,b=map(int,input().split())
    l=list(map(int,input().split()))
    k=rec(b,sum(l),l)
    print(k)
        
