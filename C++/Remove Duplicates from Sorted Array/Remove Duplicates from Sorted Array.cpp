//Source: https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
//Problem Description:
/*

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].

*/
//Tags: Array, Two pointers
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0)
            return 0;
        //using two pointers,fastIndex and slowIndex
        int slowIndex = 0;
        for(int fastIndex =1; fastIndex<n; fastIndex++){
            if(A[slowIndex] !=A[fastIndex])
                A[++slowIndex] = A[fastIndex];
        }
        return slowIndex+1;
    }
};