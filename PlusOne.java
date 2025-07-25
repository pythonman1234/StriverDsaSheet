class Solution {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        // If all digits are 9, like 999 -> 1000
        digits = new int[digits.length + 1];
        digits[0] = 1;
        return digits;
    }
}
