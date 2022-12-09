def delete(n,n_unfriend,pop_list):
    stack=[]
    for friend_pop in pop_list:
        while n_unfriend and stack and stack[-1]<friend_pop:
            stack.pop()
            n_unfriend=n_unfriend-1
        stack.append(friend_pop)
    print(" ".join(map(str,stack)))
T=int(input())
for i in range(T):
    n,n_unfriend=map(int,input().split())
    pop_list=map(int,input().split())
    delete(n,n_unfriend,pop_list)