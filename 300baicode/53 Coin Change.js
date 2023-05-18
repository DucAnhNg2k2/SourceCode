/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function (coins, amount) {
  let arr = [];
  for (let i = 0; i <= amount; i++) {
    arr[i] = 100000;
  }
  arr[0] = 0;
  for (let i = 0; i <= amount; i++) {
    for (let j = 0; j < coins.length; j++) {
      if (i >= coins[j]) {
        if (arr[i - coins[j]] + 1 < arr[i]) {
          arr[i] = arr[i - coins[j]] + 1;
        }
      }
    }
  }
  if (arr[amount] == 100000) {
    return -1;
  }
  return arr[amount];
};
