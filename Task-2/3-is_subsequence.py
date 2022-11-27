def is_subsequence(str1, str2):
    i = 0;j=0;
    n= len(str1)
    m =len(str2)
   
    while (i < n and j < m):
        if (str1[i] == str2[j]):
            i += 1
        j += 1
 
    return i == n
s1,s2='hello',input()
print('YES' if is_subsequence(s1,s2) else 'NO')