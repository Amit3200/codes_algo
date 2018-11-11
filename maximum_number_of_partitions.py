def maxPartitions(arr, n): 
    ans = 0; max_so_far = 0
    for i in range(0, n):  
        max_so_far = max(max_so_far, arr[i]) 
        if (max_so_far == i): 
            ans += 1
    return ans 

for _ in range(int(input())):
    arr=list(map(int,input().split()))
    n = len(arr) 
    print(maxPartitions(arr, n)) 
  
