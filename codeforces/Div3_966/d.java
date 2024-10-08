import java.util.Scanner;

public class Main {

    static long[] tab = new long[200002];

    public static void solution() {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        long[] v = new long[n];

        int i = 0;
        long res = 0;

        while (i < n) {
            v[i] = sc.nextLong();
            if (i == 0) {
                tab[i] = v[i];
            } else {
                tab[i] = tab[i - 1] + v[i];
            }
            i++;
        }

        String s = sc.next();

        int pos1 = s.indexOf("L");
        int pos2 = s.lastIndexOf("R");

        while (pos1 != -1 && pos2 != -1) {
            if (pos2 > pos1) {
                if (pos1 - 1 >= 0) {
                    res += tab[pos2] - tab[pos1 - 1];
                } else {
                    res += tab[pos2];
                }
            }
            s = s.substring(0, pos1) + '.' + s.substring(pos1 + 1);
            s = s.substring(0, pos2) + '.' + s.substring(pos2 + 1);
            pos1 = s.indexOf("L");
            pos2 = s.lastIndexOf("R");
        }

        System.out.println(res);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            solution();
        }
    }
}
