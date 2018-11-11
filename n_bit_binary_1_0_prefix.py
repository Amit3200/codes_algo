import sys
sys.setrecursionlimit(5000)
ans=[]
def gen(n,ex,rp):
    if 0==rp:
        ans.append(n)
        return None
    gen(n+"1",ex+1,rp-1)
    if 0<ex:
        gen(n+"0",ex-1,rp-1)


for _ in range(int(input())):
    ans=[]
    z=int(input())
    n=""
    gen(n,0,z)
    print(*ans)
        
