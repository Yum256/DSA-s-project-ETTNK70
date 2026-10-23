# Problem 10: Find majority element 
Given an integer array containing duplicates, return the majority element if present. A majority element appears more than n/2 times, where n is the array size.<br>

For example:<br>
The majority element is 2 in array {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2}.<br>
Algorithm: We just need to check element’s frequency in the first half of the array because if the element appears in the second half, its frequency cannot be n/2. We use one variable represent indices of array - i and one counter - j, i runs from 0 to n/2 and j runs from 0 to n, if we found arr[j] == arr[i] , then counter ++ ; if counter > n/2 , then arr[i] is the element we need to found.<br>
Test set:<br>
Case 1:<br>
Input: 4 5 4 2 4 1 3 4 4 3 4 4<br>
Output: 4<br>
Case 2:<br>
Input 4 3 5 6 5 7 8 2 3 4 5<br>
Output: Not found<br>
