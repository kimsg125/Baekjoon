import java.util.Scanner;

public class 평범한_배낭 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[][] item = new int[100][2];

        for (int i=0; i<N; i++) {
            item[i][0] = sc.nextInt();
            item[i][1] = sc.nextInt();
        }
    }
}
