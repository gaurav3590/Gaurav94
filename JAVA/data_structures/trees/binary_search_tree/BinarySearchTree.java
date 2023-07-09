package data_structures.trees.binary_search_tree;

import java.util.ArrayList;

public class BinarySearchTree {
    Node root = null;

    public void insert(int value) {
        Node newNode = new Node(value);
        if (this.root == null) {
            this.root = newNode;
        } else {
            Node current = this.root;
            while (true) {
                // right
                if (current.value < value) {
                    if (current.right != null) {
                        current = current.right;
                    } else {
                        current.right = newNode;
                        break;
                    }
                } else {
                    if (current.left != null) {
                        current = current.left;
                    } else {
                        current.left = newNode;
                        break;
                    }
                }
            }
        }
    }


    public boolean lookup(int value) {
        Node current = this.root;
        while (current != null) {
            if (current.value > value) {
                current = current.left;
            } else if (current.value < value) {
                current = current.right;
            } else {
                return true;
            }
        }
        return false;
    }


    public void remove(int value) {
        if (this.root == null) {
            return;
        }
        Node current = this.root;
        Node parentNode = null;
        // while current is not null
        while (current != null) {
            if (value < current.value) {
                parentNode = current;
                current = current.left;
            } else if (value > current.value) {
                parentNode = current;
                current = current.right;
            }
            else {
                if (current.right == null) {
                    if (parentNode == null) {
                        this.root = current.left;
                    } else {
                        if (current.value < parentNode.value) {
                            parentNode.left = current.left;

                        }
                        else if (current.value > parentNode.value) {
                            parentNode.right = current.left;
                        }
                    }
                }

                else if (current.right.left == null) {
                    if (parentNode == null) {
                        this.root = current.right;
                    } else {
                        if (current.value < parentNode.value) {
                            parentNode.left = current.right;
                        }
                        else if (current.value > parentNode.value) {
                            parentNode.right = current.right;
                        }
                    }
                }

                else {
                    if (parentNode == null) {
                        Node leftNode = this.root.left;
                        Node rightNode = this.root.right;
                        this.root = current.right.left;
                        rightNode.left = rightNode.left.right;
                        this.root.left = leftNode;
                        this.root.right = rightNode;
                    } else {
                        if (current.value < parentNode.value) {
                            parentNode.left = current.right.left;
                        } else if (current.value > parentNode.value) {
                            parentNode.right = current.right.left;
                        }
                    }
                }
                return;
            }
        }
    }

    public ArrayList<Integer> breadthFirstSearch() {
        Node currentNode = this.root;
        ArrayList<Integer> resultArray = new ArrayList<>();
        ArrayList<Node> queue = new ArrayList<>();
        queue.add(currentNode);

        while (queue.size() > 0) {
            currentNode = queue.remove(0);
            resultArray.add(currentNode.value);

            if (currentNode.left != null) {
                queue.add(currentNode.left);
            }
            if (currentNode.right != null) {
                queue.add(currentNode.right);
            }
        }
        return resultArray;
    }

    public ArrayList<Integer> breadthFirstSearchRecursive(
            ArrayList<Node> queue,
            ArrayList<Integer> resultArray
    ) {
        if (queue.size() == 0) {
            return resultArray;
        }

        Node currentNode = queue.remove(0);
        resultArray.add(currentNode.value);
        if (currentNode.left != null) {
            queue.add(currentNode.left);
        }
        if (currentNode.right != null) {
            queue.add(currentNode.right);
        }

        return breadthFirstSearchRecursive(queue, resultArray);
    }

    HelperFunctions hlp = new HelperFunctions();

    public ArrayList<Integer> DFSInOrder() {
        ArrayList<Integer> answer = new ArrayList<>();
        return hlp.traverseInOrder(this.root, answer);
    }

    public ArrayList<Integer> DFSPreOrder() {
        ArrayList<Integer> answer = new ArrayList<>();
        return hlp.traversePreOrder(this.root, answer);
    }

    public ArrayList<Integer> DFSPostOrder() {
        ArrayList<Integer> answer = new ArrayList<>();
        return hlp.traversePostOrder(this.root, answer);
    }

    public static void main(String[] args) {


        BinarySearchTree bst = new BinarySearchTree();
        bst.insert(9);
        bst.insert(4);
        bst.insert(6);
        bst.insert(20);
        bst.insert(170);
        bst.insert(15);
        bst.insert(1);

        System.out.println("bfs: " + bst.breadthFirstSearch());
        System.out.println("look for 20: " + bst.lookup(20));

        ArrayList<Node> queue = new ArrayList<>();
        queue.add(bst.root);
        System.out.println("bfs recursive: " + bst.breadthFirstSearchRecursive(queue, new ArrayList<>()));

        System.out.println("dfs inOrder: " + bst.DFSInOrder());
        System.out.println("dfs preOrder: " + bst.DFSPreOrder());
        System.out.println("dfs postOrder: " + bst.DFSPostOrder());

        bst.remove(20);
        System.out.println("look for 20 after removing 20: " + bst.lookup(20));
    }
}
