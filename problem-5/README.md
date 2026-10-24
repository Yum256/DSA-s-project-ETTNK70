# Problem 5: Find the maximum product of two integers in an array

Given an integer array, find the maximum product of two integers in it.<br>
For example:<br>
Consider array {-10, -3, 5, 6, -2}. <br>
The maximum product is the (-10, -3) or (5, 6) pair.<br>
Algorithm: <br>
Firstly, we need to sort the array <br>
Secondly, considering the product of arr[0] and arr[1] with arr[n-1] and arr[n-2] ( arr[0].arr[1] could be greater than arr[n-1].arr[n-2] when both arr[0] and arr[1] < 0 and |arr[0].arr[1]| > arr[n-1].arr[n-2] )<br>
Test set:<br>
Case 1:<br>
Input: 4 3 -6 -8 5 9<br>
Output: (-8,-6)<br>
Case 2: <br>
Input: 6 6 -4 -9 1 4 5<br>
Ouput: (-9,-4) (6,6)
