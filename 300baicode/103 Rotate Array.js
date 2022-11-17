/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  k %= nums.length;
  ans = [];
  for (let i = nums.length - k; i < nums.length; i++) {
    ans.push(nums[i]);
  }
  for (let i = 0; i <= nums.length - k; i++) {
    ans.push(nums[i]);
  }
  for (let i = 0; i < nums.length; i++) {
    nums[i] = ans[i];
  }
};
