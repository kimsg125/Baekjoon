import java.io.*;
import java.util.*;

class b18185 {

    static int N, sum;

    static int[] ramen;

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        N = Integer.parseInt(br.readLine());

        ramen = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = N - 1; i >= 0; i--) {
            ramen[i] = Integer.parseInt(st.nextToken());
        }

        for (int i = 0; i < N; i++) {
            while (ramen[i] > 0) {
                if (i < N - 2 && ramen[i + 1] > 0 && ramen[i + 2] > 0) {
                    int minNum = Math.min(ramen[i], Math.min(ramen[i + 1], ramen[i + 2]));
                    sum += 7 * minNum;
                    ramen[i] -= minNum;
                    ramen[i + 1] -= minNum;
                    ramen[i + 2] -= minNum;
                } else if (i < N - 1 && ramen[i] > 0 && ramen[i + 1] > 0) {
                    int minNum = Math.min(ramen[i], ramen[i + 1]);
                    sum += 5 * minNum;
                    ramen[i] -= minNum;
                    ramen[i + 1] -= minNum;
                } else if (ramen[i] > 0) {
                    sum += 3 * ramen[i];
                    ramen[i] = 0;
                }
            }
        }

        System.out.println(sum);

    }

}