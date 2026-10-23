# Problem 3: Find the duplicate element in a limited range array

Given a limited range array of size n containing elements between 1 and n-1 with one element repeating, find the duplicate number in it without using any extra space.<br>
For example:<br>
Input:  { 1, 2, 3, 4, 4 }<br>
Output: The duplicate element is 4  <br>
Algorithm: Using XOR, since the same elements will cancel each other as a^a = 0, 0^0 = 0 and a^0 = a, we will be left with the duplicate element. At first we set a variable xor = 0, then let xor XOR with the whole array, then let xor XOR with all value from 1 to n-1. The duplicated number would be XORed 3 times then the value of xor is the duplicate element.<br>
Test set:<br>
Case 1:<br>
Input: 1,4,2,3,5,6,8,7,4<br>
Output: 4<br>
Case 2:<br>
Input 1,1<br>
Output: 1
