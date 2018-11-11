import sys 
def maxOverlap(start,end): 
   
    n= len(start) 
    maxa = max(start) 
    maxb = max(end)
    maxc=max(maxa,maxb) 
    x =(maxc+2)*[0] 
    cur=0; idx=0
   
    for i in range(0,n):
        x[start[i]]+=1
        x[end[i]+1]-=1
        
    maxy=-1
    for i in range(0,maxc+1):  
        cur+=x[i] 
        if maxy<cur : 
            maxy=cur 
            idx=i     
    print(maxy,idx)
def m():
    for _ in range(int(input())):
        n=int(input())
        l=list(map(int,input().split()))
        l1=list(map(int,input().split()))             
        maxOverlap(l,l1)

m()
