public class Fatorial {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            int x = i;
            for (int j = x-1; j >= 1; j--) {
                x *= j;
            }
            System.out.println(x);
        }
    }
}
