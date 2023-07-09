package data_structures.hashtables.first_recurring_character;

import java.util.HashSet;

public class FirstRecurring {
    private Integer firstRecurringCharacter(int[] array) {
        HashSet<Integer> hashSet = new HashSet<>();
        for (int element : array) {
            if (hashSet.contains(element)) {
                return element;
            } else {
                hashSet.add(element);
            }
        }
        return null;
    }

    public static void main(String[] args) {
        int[] arr = {2, 5, 5, 2, 3, 5, 1, 2, 4};
        FirstRecurring obj = new FirstRecurring();
        System.out.println(obj.firstRecurringCharacter(arr));
    }
}
