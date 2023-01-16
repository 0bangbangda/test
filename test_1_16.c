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
//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��
//���룺nums = [0,0,1,1,1,2,2,3,3,4]
//�����5, nums = [0, 1, 2, 3, 4]
//���ͣ�����Ӧ�÷����µĳ��� 5 �� ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�
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