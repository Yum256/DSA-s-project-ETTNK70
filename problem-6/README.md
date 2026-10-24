# Problem 6: Rearrange an array with alternate high and low elements

Given an integer array, rearrange it such that every second element becomes greater than its left and right elements. Assume no duplicate elements are present in the array.<br>
For example:<br>
Input:  {1, 2, 3, 4, 5, 6, 7}<br>
Output: {1, 3, 2, 5, 4, 7, 6} <br>
Input:  {9, 6, 8, 3, 7}<br>
Output: {6, 9, 3, 8, 7} <br>
Input:  {6, 9, 2, 5, 1, 4}<br>
Output: {6, 9, 2, 5, 1, 4}<br>
Algorithm: <br>
From the requirement of the problem, we know that each group of 3 continuous element, the middle one has to be greatest, which mean if we review the element arr[n], it must be greatest in the group ( arr[n-1], arr[n] and arr[n+1]). <br>Start from the second element, in each loop, we compare arr[index] with 2 elements in 2 sides. If arr[index]<arr[index-1] => swap, If arr[index]>arr[index+1] => swap.<br>
Test set: <br>
Case 1:<br>
Input: 1 2 3 4 6 7 8<br>
Output:1 3 2 6 4 8 7<br>
Case 2:<br>
Input: 6 7 4 6 5 9 8<br>
Output: 6 7 4 6 5 9 8<br>
