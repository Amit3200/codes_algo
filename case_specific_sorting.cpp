#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 26; 
void sortByPattern(string &str, string pat) 
{ 
    int count[MAX_CHAR] = {0}; 
    for (int i = 0 ; i < str.length(); i++) 
        count[str[i] - 'a']++; 
    int index = 0; 
    for (int i = 0; i < pat.length(); i++) 
        for (int j = 0; j < count[pat[i] - 'a']; j++) 
            str[index++] = pat[i]; 
} 
int main() 
{ 
    string pat = "bca"; 
    string str = "abc"; 
    sortByPattern(str, pat); 
    cout << str; 
    return 0; 
} 
