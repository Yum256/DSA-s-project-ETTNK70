# Problem 2: Sort binary array in linear time

Given a binary array, sort it in linear time and constant space. The output should print all zeros, followed by all ones.<br>
For example:<br>
Input:  { 1, 0, 1, 0, 1, 0, 0, 1 } <br>
Output: { 0, 0, 0, 0, 1, 1, 1, 1 } <br>
Algorithm: Using the partitioning logic of Quicksort, we set 1 as pivot.<br>
Test set:<br>
Case 1: <br>
Input: 0 1 0 1 1 0 1 0 0 1 1 0<br>
Output: 0 0 0 0 0 0 1 1 1 1 1 1 <br>
Case 2: <br>
Input: 0 0 0 0 0 0 0 0 <br>
Output: 0 0 0 0 0 0 0 0
