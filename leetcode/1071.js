/**
 * @param {string} str1
 * @param {string} str2
 * @return {string}
 */
var gcdOfStrings = function (str1, str2) {
  if (str1 + str2 !== str2 + str1) return "";
  return str1.slice(0, GCD(str1.length, str2.length));
};

function GCD(a, b) {
  return b == 0 ? a : GCD(b, a % b);
}

console.log(gcdOfStrings("ABCABC", "ABC"));
