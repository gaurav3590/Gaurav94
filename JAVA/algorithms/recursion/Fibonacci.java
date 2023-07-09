package algorithms.recursion.fibonacci;

public class Fibonacci {

    public int fibonacciIterative(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        } else {
            int[] arr = {1, 1};
            for (int i = 3; i <= n; i++) {
                int temp = arr[1];
                arr[1] = arr[0] + arr[1];
                arr[0] = temp;
            }
            return arr[1];
        }
    }


    public int fibonacciRecursive(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        }
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }

    public static void main(String[] args) {
        Fibonacci fibonacci = new Fibonacci();
        System.out.println(fibonacci.fibonacciIterative(5));
        System.out.println(fibonacci.fibonacciRecursive(5));
    }
}
