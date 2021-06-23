int* runningSum(int* nums, int numsSize, int* returnSize){
    int *p;
    p = malloc(numsSize * sizeof(int));
    if (p == NULL) {
        printf("No space left");
    }
    
    p[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        p[i] = p[i-1] + nums[i];
    }
    *returnSize = numsSize;
    return p;
}