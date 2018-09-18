package com.example.williamwang.myapplication;

public class NdkTest {
    static {
        System.loadLibrary("JniTest");
    }

    public static native String getString();
}
