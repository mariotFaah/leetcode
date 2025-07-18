function longestPalindrome(s) {
    if (!s || s.length < 1) return "";
    let start = 0;
    let end = 0;

    for (let i = 0; i < s.length; i++) {
        const len1 = expandFromCenter(s, i, i);     // palindrome impair
        const len2 = expandFromCenter(s, i, i + 1); // palindrome pair
        const len = Math.max(len1, len2);
        if (len > end - start) {
            start = i - Math.floor((len - 1) / 2);
            end = i + Math.floor(len / 2);
        }
    }
    return s.substring(start, end + 1);
}

function expandFromCenter(s, left, right) {
    while (left >= 0 && right < s.length && s[left] === s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // longueur du palindrome
}

