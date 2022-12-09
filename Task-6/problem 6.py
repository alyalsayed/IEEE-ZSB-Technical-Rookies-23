import os
import random
import re
import sys

#
# Complete the 'circularArrayRotation' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER k
#  3. INTEGER_ARRAY queries
#

def circularArrayRotation(n,arr, k, queries):
	res=[]
	for  query in queries:
		res.append(arr[(n-k+query)%n])
	return res
'''
3 2 3  n=3,k=2,q=3 
1 2 3  arr[n]
0      queries[0]
1      queries[1]       
2      queries[2]
1 2 3 >> 3 1 2 >> 2 3 1
queries[0]=arr[1] (n-k+query)=1
queries[1]=arr[2]
queries[2]=arr[0]
'''

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    q = int(first_multiple_input[2])

    a = list(map(int, input().rstrip().split()))

    queries = []

    for _ in range(q):
        queries_item = int(input().strip())
        queries.append(queries_item)

    result = circularArrayRotation(n,a, k, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
