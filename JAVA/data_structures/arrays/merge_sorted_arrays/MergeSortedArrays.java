package data_structures.arrays.merge_sorted_arrays;

import java.util.Arrays;

public class MergeSortedArrays {
    private int[] mergeArrays(int[] arr1, int[] arr2) {

        int i = 0, j = 0, k = 0;

        int mergedArrayLength = arr1.length + arr2.length;

        int[] mergedArray = new int[mergedArrayLength];

        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j]) {
                mergedArray[k] = arr1[i];
                i++;
            } else {
                mergedArray[k] = arr2[j];
                j++;
            }
            k++;
        }

        while (i < arr1.length) {
            mergedArray[k] = arr1[i];
            i++;
            k++;
        }
        while (j < arr2.length) {
            mergedArray[k] = arr2[j];
            j++;
            k++;
        }
        return mergedArray;
    }

    public static void main(String[] args) {
        MergeSortedArrays arrays = new MergeSortedArrays();
        int[] arr3 = arrays.mergeArrays(new int[]{0, 3, 4, 31}, new int[]{4, 6, 30});
        System.out.println(Arrays.toString(arr3));

    }
}
