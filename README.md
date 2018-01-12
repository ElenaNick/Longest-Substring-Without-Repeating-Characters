# Longest-Substring-Without-Repeating-Characters
Longest Substring Without Repeating Characters - my solution for https://leetcode.com/problems/longest-substring-without-repeating-characters/description/


In this algorithm the length of longest substring is calculated starting with each character in the string.
To find the length of longest substing starting with character i, this character is compared to subsequent characters in the string till 
  the match is found. The index of the match is stored as a cut-off index, and next character [i+1] is compared till match is found or cut
  off index is reached. repeating this loop till the max length is found.
This running max is compared to the best solution, and the bigger value is stored.

Time complexty: min(O(n*k^2), O(n^3)) where k is length of the alphabet. 
Space complexity: O(1)
