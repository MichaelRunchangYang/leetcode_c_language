int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    int left = 0;
    int right = numsSize -1;
    while (left <= right) {
        if (nums[left] == val && nums[right] == val) {
            right -= 1;
            count += 1;
        }
        else if (nums[left] == val) {
            nums[left] = nums[right];
            left += 1;
            right -= 1;
            count += 1;
        }
        else {
            left += 1;
        }
    }
    return numsSize - count;
}