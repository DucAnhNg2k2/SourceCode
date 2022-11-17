/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  let vs = [];
  let idxMax = nums[0];
  let i = 1;
  while (i <= idxMax) {
    if (i + nums[i] > idxMax) {
      idxMax = i + nums[i];
      if (idxMax >= nums.length - 1) {
        break;
      }
    }
    i += 1;
  }
  if (idxMax >= nums.length - 1) {
    return true;
  }
  return false;
};
