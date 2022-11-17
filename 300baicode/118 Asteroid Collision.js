/**
 * @param {number[]} asteroids
 * @return {number[]}
 */

var asteroidCollision = function (asteroids) {
  const ans = [];
  for (let i = 0; i < asteroids.length; i++) {
    if (ans.length == 0) {
      ans.push(asteroids[i]);
    } else {
      if (ans[ans.length - 1] > 0 && asteroids[i] < 0) {
        check = true;
        while (ans.length > 0 && ans[ans.length - 1] > 0 && asteroids[i] < 0) {
          if (Math.abs(ans[ans.length - 1]) == Math.abs(asteroids[i])) {
            check = true;
            ans.pop();
            break;
          } else if (Math.abs(ans[ans.length - 1] < Math.abs(asteroids[i]))) {
            check = false;
            ans.pop();
          } else {
            check = true;
            break;
          }
        }
        if (check == false) {
          ans.push(asteroids[i]);
        }
      } else {
        ans.push(asteroids[i]);
      }
    }
  }
  return ans;
};
