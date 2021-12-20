int missingNumber(int* nums, int numsSize){
int total = 0;
   total = numsSize * (numsSize+1)/2;
   for (int i = 0; i < numsSize; i++)
   {
       total = total - nums[i];
   }
   return total;
}
