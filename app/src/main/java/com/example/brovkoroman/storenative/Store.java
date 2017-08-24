package com.example.brovkoroman.storenative;

/**
 * Created by brovkoroman on 24.08.17.
 */

public class Store {
    static {
        System.loadLibrary("com_packtpub_store_Store");
    }

    public  native  int getCount();
}
