//int* plusOne(int* digits, int digitsSize, int* returnSize){
//int k=digitsSize-1;
//int *arr=(int*)malloc(sizeof(int)*(digitsSize+1));
//if(digits[k]<9){
//    digits[k]++;
//}
//else{
//    while(k>=0&&digits[k]==9)
//    k--;
//    //判断k是否越界，如果越界则首位也为9
//    if(k<0){
//        //所有位均为9
//        arr[0]=1;
//for(int i=1;i<digitsSize+1;i++)
//arr[i]=0;
//*returnSize=digitsSize+1;
//return arr;
//    }
//    else
//    {
//        digits[k]++;
//        while(++k<digitsSize){
//digits[k]=0;
//        }
//    }
//}
//*returnSize=digitsSize;
//return digits;
//}