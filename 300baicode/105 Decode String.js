/**
 * @param {string} s
 * @return {string}
 */
var decodeString = function (s) {
  // Stack
  let st = [];
  for (let i = 0; i < s.length; i++) {
    if (s[i] != "]") {
      st.push(s[i]);
    } else {
      let str = "",
        cnt = "",
        s = "";
      while (st[st.length - 1] != "[") {
        str = st[st.length - 1] + str;
        st.pop();
      }
      st.pop();
      while (st[st.length - 1] >= "0" && st[st.length - 1] <= "9") {
        cnt = st[st.length - 1] + cnt;
        st.pop();
      }
      for (let ii = 1; ii <= cnt; ii++) {
        s += str;
      }
      st.push(s);
    }
  }
  let ans = "";
  st.forEach(value => {
    ans += value;
  });
  return ans;
};
