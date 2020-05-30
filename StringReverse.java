import java.util.Scanner;

/**
 * StringReverse
 */
public class StringReverse {

    static void solve() {
        Scanner sc = new Scanner(System.in);
        String ip = sc.nextLine();

        String op = "";
        String[] rev = ip.split("\\.");
        for (int i = rev.length - 1; i >= 1; i--) {
            op = op + rev[i] + ".";
        }
        op += rev[0];
        System.out.println(op);

    }

    public static void main(String[] args) {
        int T;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        while (T > 0) {
            solve();
            T--;
        }

    }
}