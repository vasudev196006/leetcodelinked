/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* seen = (int*)calloc(numsSize + 1, sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        seen[nums[i]] = 1;
    }
    int* result = (int*)malloc(numsSize * sizeof(int));
    int count = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (seen[i] == 0) {
            result[count++] = i;
        }
    }
    *returnSize = count;
    free(seen);
    return result;
}