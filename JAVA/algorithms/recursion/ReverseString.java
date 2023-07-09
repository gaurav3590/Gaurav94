package algorithms.recursion.reverse_string;
public class ReverseString {

    public String reverseStringIterative(String string) {
        char[] charArray = string.toCharArray();
        for (int i = 0; i < (charArray.length / 2); i++) {
            char temp = charArray[i];
            charArray[i] = charArray[(charArray.length - 1) - i];
            charArray[(charArray.length - 1) - i] = temp;
        }
        return new String(charArray);
    }

    public String reverseStringRecursive(String string) {
        if (string.equals("")) {
            return "";
        }
        return reverseStringRecursive(string.substring(1)) + string.charAt(0);
    }


    public static void main(String[] args) {
        ReverseString reverse = new ReverseString();
        String reversedString = reverse.reverseStringIterative("yoyo mastery");
        System.out.println(reversedString);

        System.out.println(reverse.reverseStringRecursive("yoyo mastery"));
    }
}
