# Problem 7: Move all zeros present in an array to the end
Given an integer array, move all zeros present in it to the end. The solution should maintain the relative order of items in the array and should not use constant space.<br>
For example:<br>
Input:  { 6, 0, 8, 2, 3, 0, 4, 0, 1 } <br>
Output: { 6, 8, 2, 3, 4, 1, 0, 0, 0 }<br>
Algorithm: Using partition algorithm of quicksort, we set pivot = 0. Using 2 index variable i,j ; let j = 0 and i runs from 0 to n-1; if arr[i] != 0, then swap arr[i] with arr[j] and j++<br>
Test set:<br>
Case 1:<br>
Input: 6 9 8 0 4 0 5 0 5 0<br>
Output: 6 9 8 4 5 5 0 0 0 0 <br>
Case 2:<br>
Input: 0 0 0 0 0 0 0 0 0 1<br>
Output: 1 0 0 0 0 0 0 0 0 0<br>
