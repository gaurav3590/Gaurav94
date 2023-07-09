package data_structures.trees.trie;


public class Trie {
    private final Node root = new Node();

    public void insert(String string) {
        Node current = root;

        for (char ch : string.toCharArray()) {
            current.children.putIfAbsent(ch, new Node());
            current = current.children.get(ch);
        }
        current.isWord = true;
    }

    public boolean findWord(String string) {
        Node current = root;
        for (char ch : string.toCharArray()) {
            if (current.children.containsKey(ch)) {
                current = current.children.get(ch);
            } else {
                return false;
            }
        }
        return current.isWord; // true;
    }


    public boolean delete(String word) {
        Node current = root;
        Node deleteAfter = root;
        char ch1 = word.charAt(0); 

        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if (current.children.containsKey(ch)) {
                current = current.children.get(ch);
                if (current.children.size() > 1) {
                    deleteAfter = current;
                    ch1 = word.charAt(i + 1);
                }
            } else {
                return false;
            }
        }

        if (current.children.isEmpty()) {
            deleteAfter.children.remove(ch1);
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Trie trie = new Trie();
        trie.insert("heating");
        trie.insert("heat");
        System.out.println(trie.root.children.get('h').children.get('e').children);
        System.out.println(trie.delete("heat"));
        System.out.println(trie.findWord("heat"));
        System.out.println(trie.root.children.get('h').children.get('e').children);
    }
}
