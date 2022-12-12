/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/


#include<stdio.h>

int* twoSum(int*, int, int, int*);

int main() {
    int numSize, target;
    printf("enter array size"); // array size
    scanf("%d", &numSize);

    int nums[numSize];
    for (int i = 0; i < numSize; i++)// filling up array
    {
        printf("\nenter array %d = ", i);
        scanf("%d",&nums[i]);
    }

    printf("\nenter target : ");// getting targeted value
    scanf("%d", &target);
    

}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
}