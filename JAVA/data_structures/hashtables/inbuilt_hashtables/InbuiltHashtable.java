package data_structures.hashtables.inbuilt_hashtables;

import java.util.Hashtable;
import java.util.Map;

public class InbuiltHashtable {
    public static void main(String[] args) {
        Map<String, String> phoneBook = new Hashtable<>();
        phoneBook.put("Chris", "445454545");
        phoneBook.put("Morris", "4548623233");
        phoneBook.put("Mary", "865656223");

        System.out.println("phoneBook: "+phoneBook);
        System.out.println("Chris's phoneNo." + phoneBook.get("Chris"));
        System.out.println("remove morris: "+phoneBook.remove("Morris"));
        System.out.println("phoneBook: "+phoneBook);

    }
}
