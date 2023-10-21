import java.util.*;

public class LongestSubstringWithoutRepeatingCharacters {
    public static int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxLength = 0;
        int left = 0;
        Map<Character, Integer> charIndexMap = new HashMap<>();

        for (int right = 0; right < n; right++) {
            char c = s.charAt(right);

            if (charIndexMap.containsKey(c)) {
                // If the character is already in the map, move the left pointer to the right of the last occurrence
                left = Math.max(left, charIndexMap.get(c) + 1);
            }

            charIndexMap.put(c, right);
            maxLength = Math.max(maxLength, right - left + 1);
        }

        return maxLength;
    }

    public static void main(String[] args) {
        String s = "abcabcbb";
        int result = lengthOfLongestSubstring(s);
        System.out.println("Length of the longest substring without repeating characters: " + result);
    }
}
