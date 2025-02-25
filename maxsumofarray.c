#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int cal(int nums[], int k, int size) {
    int sum = 0;
    qsort(nums, size, sizeof(int), compare);
   
    for (int i = 0; k > 0 && i < size; i++) {
        if (nums[i] < 0) {
            nums[i] = -nums[i];
            k--;
        }
    }
   
    qsort(nums, size, sizeof(int), compare);
   
    if (k % 2 == 1) {
        nums[0] = -nums[0];
    }
   
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
   
    return sum;
}

int main() {
    int nums[] = {4, 2, 3};
    int k = 1;
    int l = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", cal(nums, k, l));
   
    int nums_1[] = {3, -2};
    int k_l = 3;
    int lo = sizeof(nums_1) / sizeof(nums_1[0]);
    printf("%d\n", cal(nums_1, k_l, lo));
   
    return 0;
}
