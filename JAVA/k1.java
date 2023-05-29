 package Gavu;


class Base {

public void foo() { System.out.println("Base"); 
    }
}

class Derived extends Base {
private void foo() { 
    System.out.println("Derived");
    }
}
public class k1 {

public static void main(String args[]) {

Base b= new Derived();

b.foo();

}
}

