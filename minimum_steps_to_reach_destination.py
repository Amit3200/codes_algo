import sys
sys.setrecursionlimit(3000)
def countsto(s,k,d):
    if abs(s)>d:
        return 10**9
    if s==d:
        return k
    ps=countsto(s+k+1,k+1,d)
    ng=countsto(s-k-1,k+1,d)
    return min(ps,ng)



for _ in range(int(input())):
    z=int(input())
    x=countsto(0,0,z)
    print(x)
