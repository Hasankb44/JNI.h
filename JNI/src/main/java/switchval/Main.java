package switchval;

public class Main {

    public int sum = 0;

    public native void setSum(int x, int y);

    static {
        Runtime.getRuntime().load("C:/Users/ruyak/OneDrive/Masaüstü/JNI/src/main/java/switchval/extern.dll");

    }

    public static void main(String[] args) {
        Main main = new Main();
        System.out.println(main.sum);
        main.setSum(7,7);
        System.out.println(main.sum);
    }
}
