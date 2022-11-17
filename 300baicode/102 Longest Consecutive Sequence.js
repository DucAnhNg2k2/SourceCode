/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
  nums.sort((a, b) => {
    return a - b;
  });
  let val = -100000000000,
    size = 0,
    ans = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] == val) continue;
    if (nums[i] == val + 1) size++;
    else size = 1;
    val = nums[i];
    ans = Math.max(size, ans);
  }
  return ans;
};
