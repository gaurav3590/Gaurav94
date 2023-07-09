package algorithms.searching.binary_search;

public class BinarySearch {
    public String binarySearch(int[] arr, int key) {

        int first = 0;                  
        int last = arr.length - 1;     
        int mid = (first + last) / 2;  

        while (first <= last) {
            if (arr[mid] < key) {
                first = mid + 1;
            } else if (arr[mid] == key) {
                return "Element Found At Index " + mid;
            } else {
                last = mid - 1;
            }
            mid = (first + last) / 2;
        }
        return "Element Not Found";
    }

    public static void main(String[] args) {
        BinarySearch bs = new BinarySearch();

        int[] array = {10,25,32,45,55,68};
        String result = bs.binarySearch(array,55);
        System.out.println(result);
        String result2 = bs.binarySearch(array,100);
        System.out.println(result2);
    }
}
