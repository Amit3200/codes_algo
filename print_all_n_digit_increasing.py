ans=[]
def increasing(s,word,n):
    if n==0:
        ans.append(word)
        return
    for i in range(s,10):
        ex=word+str(i)
        increasing(i+1,ex,n-1)

for _ in range(int(input())):
    n=int(input())
    increasing(0,"",n)
    print(*ans)
