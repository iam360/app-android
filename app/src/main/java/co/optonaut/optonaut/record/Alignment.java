package co.optonaut.optonaut.record;

import android.graphics.Bitmap;

/**
 * @author Nilan Marktanner
 * @date 2016-02-11
 */
public class Alignment {
    static {
        System.loadLibrary("ndkmodule");
    }

    public static native void align(String path, String sharedPath, String storagePath);

    public static native void clear(String path, String sharedPath);
}
