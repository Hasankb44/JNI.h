public class Main {

    public static native void Test();

    static {
        System.loadLibrary("extern");
    }

    public static void main(String[] args) {
        Test();
    }
}
