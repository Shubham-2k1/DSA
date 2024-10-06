
// class Solution {

//     public ArrayList<String> findSubstring(int si, String s, int length, ArrayList<String> alstr) {
//         for (int i = si; i < length; i++) {
//             for (int j = i + 1; j <= length; j++) {
//                 alstr.add(s.substring(i, j));
//             }
//         }
//         return alstr;
//     }

//     public boolean isPalindrome(String s) {
//         int left = 0, right = s.length() - 1;
//         while (left < right) {
//             if (s.charAt(left) != s.charAt(right)) {
//                 return false;
//             }
//             left++;
//             right--;
//         }
//         return true;
//     }

//     public String longestPalindrome(String s) {
//         ArrayList<String> allSubstring = new ArrayList<>();
//         allSubstring = findSubstring(0, s, s.length(), allSubstring);

//         String result = "";
//         int max = 0;

//         for (String substring : allSubstring) {
//             if (isPalindrome(substring) && substring.length() > max) {
//                 result = substring;
//                 max = substring.length();
//             }
//         }
//         return result;
//     }

// }
