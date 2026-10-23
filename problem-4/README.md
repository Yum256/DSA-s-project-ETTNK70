# Problem 4: Sort an array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)

Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.<br>
For example:<br>
Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 } <br>
Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }<br>
Algorithm: Using partition algorithm in Quicksort with pivot = 1. Use a variable index run from 0 to n-1, if we found a number > pivot, then swap it to the last number, if we found a number < pivot then swap it to the first number, if not, increase the index to review the next number.<br>
Test set:<br>
Case 1:<br>
Input: 0 2 1 1 2 0 0 1 2 2 1 0 0<br>
Output: 0 0 0 0 0 1 1 1 1 2 2 2 2<br>
Case 2: <br>
Input: 0 0 2 2 0 0 2<br>
Output: 0 0 0 0 2 2 2
