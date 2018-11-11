import sys
import collections
from collections import deque
sys.setrecursionlimit(10000)
fact=[1,1,2,6]
for i in range(4,10,1):
    fact.append(i*fact[i-1])

def solver(z,d):
    if z==0:
        return 1
    if fact[d]>z:
        d-=1
        solver(z,d)
    else:
        z-=fact[d]
        bi.append(d)
        solver(z,d)
    
for _ in range(int(input())):
    bi=[]
    z=int(input())
    solver(z,9)
    bi.sort()
    bi=list(map(str,bi))
    print("".join(bi))
