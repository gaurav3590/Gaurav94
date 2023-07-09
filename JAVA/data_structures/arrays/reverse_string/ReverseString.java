package data_structures.arrays.reverse_string;

public class ReverseString {
    private String reverse(String string) {
        String temp = "";
        for (int i = string.length() - 1; i >= 0; i--) {
            temp += (string.charAt(i));
        }
        return temp;
    }

    private String reverse2(String string) {
        StringBuilder temp = new StringBuilder();
        for (int i = string.length() - 1; i >= 0; i--) {
            temp.append(string.charAt(i));
        }
        return temp.toString();
    }

    public static void main(String[] args) {
        String greet = "Hello World";
        ReverseString reverseString = new ReverseString();
        System.out.println(reverseString.reverse(greet));
        System.out.println(reverseString.reverse2(greet));
    }
}
