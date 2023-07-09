package data_structures.arrays.array_implementation;


import java.util.Arrays;

class DynamicArray {
    private String[] array;

    private int capacity;

    private int currentLength;

    public DynamicArray() {
        array = new String[1];
        capacity = 1;
        currentLength = 0;
    }

    public String get(int index) {
        if (index > -1 && index < currentLength)
            return this.array[index];
        else return "Index Out Of Bound";
    }

    public void push(String string) {
        if (currentLength == capacity) {
            String[] tempArray = new String[2 * capacity];
            for (int i = 0; i < array.length; i++) {
                tempArray[i] = array[i];
            }
            array = tempArray;
            capacity *= 2;
        }
        array[currentLength] = string;
        currentLength++;
    }

    public void replace(int index, String value) {
        if (index > -1 && index < currentLength) {
            array[index] = value;
        } else
            System.err.println("Index out of bounds");
    }

    public void pop() {
        if (currentLength > 0) {
            currentLength--;
        }
    }

    public void delete(int index) {
        if (index > -1 && index < currentLength) {
            if (index == currentLength - 1) {
                pop();
            } else {
                for (int i = index; i < currentLength; i++) {
                    array[i] = array[i + 1];
                }
                currentLength--;
            }
        } else {
            System.err.println("Index out of bounds");
        }
    }

    public String[] getArray() {
        String[] tempArr = new String[currentLength];
        for (int i = 0; i < currentLength; i++) {
            tempArr[i] = array[i];
        }
        return tempArr;
    }

    public int length() {
        return currentLength;
    }

    public static void main(String[] args) {
        DynamicArray dynamicArray = new DynamicArray();
        dynamicArray.push("apple");
        dynamicArray.push("ball");
        dynamicArray.push("cat");
        dynamicArray.push("dog");
        System.out.println("Array-Length: " + dynamicArray.length());
        System.out.println("array: " + Arrays.toString(dynamicArray.getArray()));
        System.out.println("item at index 2: " + dynamicArray.get(2));
        dynamicArray.replace(1, "world");
        System.out.println("array: " + Arrays.toString(dynamicArray.getArray()));
        dynamicArray.pop();
        System.out.println("array: " + Arrays.toString(dynamicArray.getArray()));
        dynamicArray.delete(1);
        System.out.println("array: " + Arrays.toString(dynamicArray.getArray()));
        System.out.println("Array-Length: " + dynamicArray.length());
    }
}