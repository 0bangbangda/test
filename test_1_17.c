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
