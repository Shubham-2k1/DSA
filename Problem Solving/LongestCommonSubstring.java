
public class LongestCommonSubstring {

    public static void main(String[] args) {
        String str1 = "Hello, World! How's everything?";
        String str2 = "Well, Hello there! How's your day going?";

        String result = findLongestCommonSubstring(str1, str2);
        System.out.println(result);  // Output might be: "How's "
    }

    public static String findLongestCommonSubstring(String str1, String str2) {
        int maxLength = 0;
        int endPos = 0;

        for (int i = 0; i < str1.length(); i++) {
            for (int j = 0; j < str2.length(); j++) {
                int k = 0;
                while (i + k < str1.length() && j + k < str2.length() && str1.charAt(i + k) == str2.charAt(j + k)) {
                    k++;
                    if (k > maxLength) {
                        maxLength = k;
                        endPos = i + k - 1;
                    }
                }
            }
        }

        return str1.substring(endPos - maxLength + 1, endPos + 1);
    }
}
