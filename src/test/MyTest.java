package test;

public class MyTest {
    
    static {
        //should set library output path
        //System.loadLibrary("AddCpp");
        System.load(System.getProperty("user.dir") + "/build/libAddCpp.so");
    }

    public static void main(String[] args) {
        System.out.println(AddCpp.add(100, 200));
    }
}
