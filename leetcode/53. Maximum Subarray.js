/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let f = [];
  f[0] = nums[0];

  for (let i = 1; i < nums.length; i++) {
    f[i] = f[i - 1] + nums[i];
  }

  let ans = -10000000;
  let min = 0;
  for (let i = 0; i < nums.length; i++) {
    ans = Math.max(ans, f[i] - min);
    min = Math.min(min, f[i]);
  }
  return ans;
};
