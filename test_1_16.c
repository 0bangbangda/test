//int removeElement(int* nums, int numsSize, int val){
//	int right = 0, left = 0, count = 0;
//	for (; right<numsSize; right++){
//		if (nums[right] != val){
//			nums[left] = nums[right];
//			left++;
//		}
//	}
//	return left;
//}
//int removeElement(int* nums, int numsSize, int val){
//	int left = 0, right = numsSize;
//	while (left<right){
//		if (nums[left] == val){
//			nums[left] = nums[right - 1];
//			right--;
//		}
//		else
//			left++;
//	}
//	return left;
//}
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
//输入：nums = [0,0,1,1,1,2,2,3,3,4]
//输出：5, nums = [0, 1, 2, 3, 4]
//解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。
#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int *nums, int numsSize);
int main(void){
	int nums[]={0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int numsSize = sizeof(nums) / sizeof(int);
	int NewSize=removeDuplicates(nums, numsSize);
	printf("%d\n", NewSize);
	for (int i = 0; i < NewSize; i++){
		printf("%d ", nums[i]);
	}
	return EXIT_SUCCESS;
}
int removeDuplicates(int *nums, int numsSize)
{
	int k = INT_MIN;
	int left = 0, right = 0;
	for (; left < numsSize; left++){
		if (nums[left]>k){
			k = nums[left];
			nums[right] = nums[left];
			right++;
		}
	}
	return right;
}
int cmp(void *p1, void *p2);
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	for (n = 0; n<nums2Size; n++, m++){
		nums1[m] = nums2[n];
	}
	qsort(nums1, nums1Size, 4, cmp);
}
int cmp(void *p1, void *p2)
{
	return (*(int*)p1 - *(int*)p2);
}