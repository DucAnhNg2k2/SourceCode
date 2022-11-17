/**
 * @param {number[][]} intervals
 * @return {number}
 */
 var eraseOverlapIntervals = function (intervals) {
  intervals.sort((a, b) => {
    if (a[0] == b[0]) {
      return a[1] - b[1];
    } else {
      return a[0] - b[0];
    }
  });
  console.log(intervals);
  const arr = [];

  for (let i = 0; i < intervals.length; i++) {
    if (arr.length == 0) {
      arr.push(intervals[i]);
    } else {
      while (arr.length && arr[arr.length - 1][1] >= intervals[i][1]) {
        arr.pop();
      }
      if (arr.length && arr[arr.length - 1][1] <= intervals[i][0]) {
        arr.push(intervals[i]);
      } else if (arr.length == 0) {
        arr.push(intervals[i]);
      }
    }
  }
  return intervals.length - arr.length;
};