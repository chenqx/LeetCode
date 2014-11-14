//Source: https://oj.leetcode.com/problems/remove-element/
//Problem Description:
/*

Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

*/
//Tags: Array, Two pointers
public class Solution {
    public int removeElement(int[] A, int elem) {
        int  countIndex = 0;
        for(int i =0; i<A.length; i++){
            if(elem != A[i])
            A[countIndex++] = A[i];
        }
            
        return countIndex;
        
    }
}