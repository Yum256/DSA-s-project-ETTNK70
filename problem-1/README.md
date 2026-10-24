# Problem 1: Find a pair with the given sum in an array

Given an unsorted integer array, find a pair with the given sum in it.<br>
For example:<br> Input: nums = [8, 7, 2, 5, 3, 1]<br>target = 10<br> Output: Pair found (8, 2) or Pair found (7, 3)<br>
Algorithm: <br>
Firstly, we need to sort the given array( use quick sort).<br>
Secondly, Use 2 indices (dau = num[0] and cuoi = num[n-1]). If num[dau] + num[cuoi] < target, increase dau, else decrease cuoi<br>
Test set:<br>
Case 1:<br>
Input: 8, 7, 2, 5, 3, 1  - target = 10<br>
Output: 2, 8<br>
Case 2:<br>
Input: 9, 7, 26, 4, 15, 31, 19  -  target = 25<br>
Output: not found
