/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function (word1, word2) {
  let result = [];
  const ceil = Math.min(word1.length, word2.length);
  let i = 0;
  while (i < ceil) {
    result.push(word1[i]);
    result.push(word2[i]);
    i++;
  }
  if (ceil === word1.length) {
    result.push(...word2.slice(ceil));
  } else {
    result.push(...word1.slice(ceil));
  }
  return result.join("");
};
