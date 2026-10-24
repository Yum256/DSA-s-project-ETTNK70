# Problem 9: Find the index of 0 to be replaced to get the maximum length sequence of continuous ones
Given a binary array, find the index of 0 to be replaced with 1 to get the maximum length sequence of continuous ones.<br>

For example:<br>
Consider the array { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. We need to replace index 7 to get the continuous sequence of length 6 containing all 1’s.<br>
Algorithm: Firstly, we need to save number of indices of all zero in original array into a temporary array called temp. Then we consider the temp array, we need to find max of temp[i+1] - temp[i-1] , then max is the value of index we attemp to find!<br>
Test set:<br>
Case 1:<br>
Input: 1 0 0 1 1 0 1 1 0 1<br>
Output: 5<br>
Case 2:<br>
Input: 1 1 1 1 1 1<br>
Output: No zero in array <br>
Case 3: <br>
Input: 1 1 1 1 1 0 1 1 1 1 1<br>
Output: 5<br>
