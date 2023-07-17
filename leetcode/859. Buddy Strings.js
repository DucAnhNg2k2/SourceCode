/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var buddyStrings = function (s, goal) {
  try {
    if (s === goal) {
      const cnt = new Map();
      for (let i = 0; i < s.length; i++) {
        if (cnt.get(s[i]) === undefined) {
          cnt.set(s[i], true);
        } else {
          return true;
        }
      }
      return false;
    } else {
      if (s.length != goal.length) {
        return false;
      }
      let arr_a = [];
      let arr_b = [];
      for (let i = 0; i < s.length; i++) {
        if (s[i] != goal[i]) {
          arr_a.push(s[i]);
          arr_b.push(goal[i]);
        }
        if (arr_a.length > 2) {
          return false;
        }
      }
      if (arr_a[0] === arr_b[1] && arr_a[1] === arr_b[0]) {
        return true;
      }
      return false;
    }
  } catch (err) {
    return false;
  }
};
