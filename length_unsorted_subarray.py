for i in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    Arr=arr[:]
    Arr.sort()
    A=[]
    for j in range(len(Arr)):
        if Arr[j]!=arr[j]:
            A.append(j)
    if len(A)!=0:
        print (str(min(A))+" "+str(max(A)))
    else:
        print('0'+" "+'0')
