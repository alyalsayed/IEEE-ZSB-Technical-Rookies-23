def max_num(n1,n2):
    if(n1>n2):
        return n1
    else:
        return n2
def min_num(n1,n2):
    if(n1<n2):
        return n1
    else:
        return n2
def solve(n, arr):
    s = [0] * n
    for i in range(n):
        if arr[i] == 1:
            s[i] = 0
        else:
            if i == 0:
                s[i] = 10**9
            else:
                s[i] = s[i - 1] + 1
    return s

n, m = map(int, input().split())
arr = map(int, input().split())
f= [0] * n

for i in arr:
    f[i] = 1

s1 = solve(n, f)
f = f[::-1]
s2 = solve(n, f)
s2 = s2[::-1]
ans = 0
for i in range(n):
    ans = max_num(ans, min_num(s1[i], s2[i]))
print (ans)