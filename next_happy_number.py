def single(n):
    f=0
    for i in str(n):
        f+=int(i)**2
    return f

def brocode():
    global s1,s2,z
    i=0
    s1=0
    s2=1
    while s1!=s2:
        if(i==0):
            s1=z
            s2=z
        s1=single(s1)
        s2=single(single(s2))
        if s1==1:
            return True
        i+=1

for _ in range(int(input())):
    z=int(input())
    z+=1
    while True:
        if brocode():
            print(z)
            break
        else:
            z+=1

    
