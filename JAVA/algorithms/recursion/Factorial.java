package algorithms.recursion.factorial;

public class Factorial {

    public int findFactorialRecursive(int number) {
        if (number < 2) {
            return 1;
        }
        return number * findFactorialIterative(number - 1);
    }


    public int findFactorialIterative(int number) {
        if (number < 2) {
            return 1;
        } else {
            int answer = 1;
            for (int i = 2; i <= number; i++) {
                answer *= i;
            }
            return answer;
        }
    }

    public static void main(String[] args) {
        Factorial factorial = new Factorial();
        System.out.println(factorial.findFactorialIterative(5));
        System.out.println(factorial.findFactorialRecursive(5));
    }
}
