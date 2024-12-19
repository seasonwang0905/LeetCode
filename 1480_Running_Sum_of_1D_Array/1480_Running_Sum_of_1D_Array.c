#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for(int i = 1; i < numsSize; i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}

int main() {
    // Example
    int input[4] = {1, 2, 3, 4};
    size_t length = sizeof(input) / sizeof(input[0]);

    int* dynamicArr = (int*) malloc(length * sizeof(int));
    
    if(!dynamicArr) {
        printf("Failed to allocate memory!");
        return 1;
    }
    
    for(int i = 0; i < length; i++) dynamicArr[i] = input[i];

    // returnSize is actually no use here.
    int returnSize;
    int *result = runningSum(dynamicArr, length, &returnSize);

    printf("Example: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");
    printf("Result: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", result[i]);
    }

    free(dynamicArr);

    return 0;
}