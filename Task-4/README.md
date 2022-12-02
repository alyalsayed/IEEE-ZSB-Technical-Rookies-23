Problem 1- Write a program to return the k most frequent elements of an array of n integers. You may return the answer in any order.


Input: 
first line contains 2 space separated integers n and k.
Second line contains n space separated integers 

Ex:
Input:
6 2
1 1 1 2 2 3

Output:
1 2


Explanation: nums [1, 2] are the 2 most frequent elements of the given array.


Problem 2- Write a program that asks the user for two strings, s1 and s2, and tests whether s2 contains a permutation of s1. returns true if it satisfies the condition, returns false otherwise

EX:
Input:
ab
eidbaooo
Output:
true

here s1 = "ab", s2 = "eidbaooo", and s2 does contain a permutation of s1 ("ba").

EX 2:
Input:
ab
eidboaoo
Output:
false




Problem 3- Find the minimum distance between 2 similar numbers in a list. 

distance means -> the absolute difference between 2 indexes

EX :
Input:
2 5 3 4 5 2
Output:
3


Explanation:
There are 2 options:
1-Distance between (2,2) which is 5 - 0 = 5
2-Distance between (5,5) which is 4 - 1 = 3
we want the minimum so we print 3




Problem 4- Try to think of an unimaginably large number, for instance, Googolplex. as you might notice no numerical data type can hold such a colossal number. the only way is by storing it as an array of digits. write a program to increment such a number by 1

Input:
an array of n numbers
Output:
print the new array

Ex:
Input:
4
1 2 3 4
Output:
1 2 3 5

Explanation: The input represents the integer 1234 => 1234 + 1 = 1235. hence, the result should be [1,2,3,5].

Ex 2:
Input:
2
9 9
Output:
1 0 0
Problem 5- Rotate a 2D-Matrix by 90 degs without any libraries.

Input:
n x n square matrix


EX: 
Input : 
3
1 2 3
4 5 6
7 8 9
Output : 
7 4 1
8 5 2
9 6 3



Problem 6- You are given a number that contains 4 digits with at least two distinct digits. 
Your program should perform the following routine on the number: Arrange the digits in descending order and in ascending order (adding zeros to fit it to a 4-digit number), and subtract the smaller number from the bigger number. Then repeat the previous step. Performing this routine will always cause you to reach a fixed number: 6174. Your program should return the number of times this routine must be performed until 6174 is reached. 
For example, if num is 3524 your program should return 3 because of the following 
steps: 
(1) 5432 - 2345 = 3087 
(2) 8730 - 0378 = 8352 
(3) 8532 - 2358 = 6174 

EX : 
Input : 
2111 
Output : 
5 



Problem 7- group the anagrams together of an array of strings. You can return the answer in any order.

Ex: 
Input:
6
eat
tea
tan
ate
nat
bat

Output:
bat
nat tan
ate eat tea



Note: An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.