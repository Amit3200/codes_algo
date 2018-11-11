def removeUtil(string, last_removed): 
    if len(string) == 0 or len(string) == 1: 
        return string 
    if string[0] == string[1]: 
        last_removed = ord(string[0]) 
        while len(string) > 1 and string[0] == string[1]: 
            string = string[1:] 
        string = string[1:] 
  
        return removeUtil(string, last_removed) 
    rem_str = removeUtil(string[1:], last_removed) 
    if len(rem_str) != 0 and rem_str[0] == string[0]: 
        last_removed = ord(string[0]) 
        return (rem_str[1:]) 
    if len(rem_str) == 0 and last_removed == ord(string[0]): 
        return rem_str 
    return ([string[0]] + rem_str) 
  
def remove(string): 
    last_removed = 0
    return toString(removeUtil(toList(string), last_removed)) 
  
def toList(string): 
    x = [] 
    for i in string: 
        x.append(i) 
    return x 
  
def toString(x): 
    return ''.join(x) 

for _ in range(int(input())):
    s=input()
    print(remove(s))
