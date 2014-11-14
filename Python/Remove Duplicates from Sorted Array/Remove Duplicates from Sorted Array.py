#Source : https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
#Problem Description:
'''
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].

'''
#Tags: Array, Two pointers
class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if not A:
            return 0
        #using two pointers,fastIndex and slowIndex
        slowIndex = 0
        for fastIndex in range(1,len(A)):
            if(A[slowIndex] !=A[fastIndex]):
                slowIndex +=1
                A[slowIndex] = A[fastIndex];

        return slowIndex+1