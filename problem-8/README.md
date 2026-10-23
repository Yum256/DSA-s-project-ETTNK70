# Problem 8: In-place merge two sorted arrays

Given two sorted arrays, X[] and Y[] of size m and n each, merge elements of X[] with elements of array Y[] by maintaining the sorted order, i.e., fill X[] with the first m smallest elements and fill Y[] with remaining elements.<br>
For example:<br>
Input: X[] = { 1, 4, 7, 8, 10 }  Y[] = { 2, 3, 9 } <br>
Output: X[] = { 1, 2, 3, 4, 7 }  Y[] = { 8, 9, 10 }<br>
Algorithm: We use merge sort's algorithm to solve this problem. Firstly, we need to merge X, Y into 1 ordered array called Z. Secondly, we split Z into 2 arr, m first element is putted into new X and the rest are putted into new Y.<br>
Test set:<br>
Case 1:<br>
Input: <br>
1 4 6 7 8 9<br>
2 5 12 13<br>
Output:<br> 
A = 1,2,4,5,6,7<br>
B = 8,9,12,13<br>
Case 2:<br>
Input: <br>
1 1 1 2 3 3 4<br>
1 2 2 2 2<br>
Output: <br>
A = 1 1 1 1 2 2 2<br>
B = 2 2 3 3 4<br>
