def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key
    return arr
n=int(input())
v,c=[],[]
for i in range(n):
    x,y=input().split()
    v.append(int(x));c.append(int(y));
#tot_vol=sum(v[:])
tot_vol=0
for i in v:
    tot_vol+=i
sort_cap=insertion_sort(c)
tot_cap=sort_cap[-2]+sort_cap[-1]
#print(tot_cap)
#print(tot_vol)
if(tot_cap>tot_vol) :
    print("YES")
else:
    print("NO")

