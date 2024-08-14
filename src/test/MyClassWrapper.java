package test;

import java.util.Arrays;

public class MyClassWrapper {  
   
    //implements by cpp
    public native void callNative(MyClassWrapper wrapper);  
  
    // load library
    static {  
        System.load(System.getProperty("user.dir") + "/build/libjic.so");
    }  
  
    public static void main(String[] args) {  
        MyClassWrapper wrapper = new MyClassWrapper(10);  
        wrapper.callNative(wrapper);  

        System.out.println(AddCpp.add(100, 200));

        System.out.println(Arrays.toString(ReturnArray.returnIntArray())); 
    }  

    private int value;  
  
    public MyClassWrapper(int value) {  
        this.value = value;  
    }  
  
    public int getValue() {  
        return value;  
    }  
  
}
