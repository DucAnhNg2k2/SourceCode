/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
 var searchMatrix = function (matrix, target) {
  let l = 0,
    r = matrix.length - 1;
  while (l <= r) {
    let m = parseInt((l + r) / 2);
    if (target >= matrix[m][0] && target <= matrix[m][matrix[m].length - 1]) {
      for (let i = 0; i < matrix[m].length; i++) {
        if (target == matrix[m][i]) {
          return true;
        }
      }
      return false;
    } else if (target <= matrix[m][0]) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  return false;
};