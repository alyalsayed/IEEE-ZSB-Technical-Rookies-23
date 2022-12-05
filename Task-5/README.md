Problem 1- Write a program that asks the user to enter a set of numbers, builds a maximum heap out of them and prints the numbers after they have been redistributed 

EX: 
Input: 
81 13 77 24 35 61 48 3 23 87 92 95 74 57 99 86 28 15 55 7 51 

Output: 
99 92 95 86 87 81 77 28 55 51 35 61 74 57 48 3 24 15 23 7 13


what are heaps? https://www.youtube.com/watch?v=t0Cq6tVNRBA&ab_channel=HackerRank


Problem 2- Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
• Open brackets must be closed by the same type of brackets.
• Open brackets must be closed in the correct order.
• Every close bracket has a corresponding open bracket of the same type.


EX:
Input:
()

Output:
true


EX 2:
Input:
([)]

Output:
false


hint: read about stacks and hashtables it will help you solve the problem in O(n) time


Problem 3- 7beshi and Zarzor are playing a game. The rules are simple 7beshi will give Zarzor a positive integer, Zarzor is going to add the square of its digits, then take the resulting number and repeat the process till he gets to 1. Only then Zarzor will win the game. Otherwise, he will enter an infinite loop and thus die trying. Write a program to check if a number will ever get to 1, if not warn Zarzor beforehand. Save Zarzor's life. He's a good guy 😢


EX :
Input:
19
Output:
true


Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

EX 2 :
Input:
2
Output:
false


Problem 4- print all prime factors of a given integer

EX :
Input:
315
Output:
3 3 5 7