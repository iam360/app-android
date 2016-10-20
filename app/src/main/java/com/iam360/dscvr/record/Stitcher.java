package com.iam360.dscvr.record;

import android.graphics.Bitmap;

/**
 * @author Nilan Marktanner
 * @date 2016-02-11
 */
public class Stitcher {
    static {
        System.loadLibrary("ndkmodule");
    }

    public static native Bitmap[] getResult(String path, String sharedPath);

    public static native Bitmap getEQResult(String path, String sharedPath);

    public static native void clear(String path, String sharedPath);

    public static native boolean hasUnstitchedRecordings(String path, String sharedPath);

}
