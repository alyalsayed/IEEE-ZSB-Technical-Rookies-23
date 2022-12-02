def get_anagrams(list1):
    dic = {}
    for word in list1:
        new_word = ''.join(sorted(word))
        if new_word not in dic:
            dic[new_word] = [word]
        else:
            dic[new_word] += [word]
    return [dic[i] for i in dic]


if __name__ == '__main__':
    n = int(input())
    list1 = []
    for _ in range(n):
        list1.append(input())
    res=get_anagrams(list1)
    for i in res:
        for j in i:
            print(j,end=" ")
        print()
'''
example:
list>>["eat" ,"tea" ,"tan", "ate", "nat" ,"bat"]
{"aet":["eat"] ,"tea" ,"tan", "ate", "nat" ,"bat"}
{"aet":["eat","tea"] ,"tea" ,"tan", "ate", "nat" ,"bat"}
{"aet":["eat","tea"] ,"ant":["tan"], "ate", "nat" ,"bat"}
{"aet":["eat","tea","ate"] ,"ant":["tan"], "nat" ,"bat"}
{"aet":["eat","tea","ate"] ,"ant":["tan","nat"],"abt":["bat"]}
'''