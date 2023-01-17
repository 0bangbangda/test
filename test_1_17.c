int searchInsert(int* nums, int numsSize, int target){
int left=0,right=numsSize-1;
for(int i=0;i<numsSize;i++){
    if(nums[i]==target)
    return i;
}
if(target<nums[left])
        return left;
else if(target>nums[right])
return right+1;
right=1;
while(1){
    if(target>nums[right]){
        left++,right++;
    }
    else
    return right;
}
}

int searchInsert(int* nums, int numsSize, int target){
int left=0,right=numsSize-1,mid;
//二分查找
while(left<=right){
mid=(left+right)/2;
if(target>nums[mid]){
    left=mid+1;
}
else if(target<nums[mid]){
    right=mid-1;
}
else if(target==nums[mid])
return mid;
}
return left;
}
控制台

