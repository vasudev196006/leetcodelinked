int removeElement(int* nums, int numsSize, int val) {
    int var = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[var] = nums[i];
            var++;
        }
    }
    return var;
}