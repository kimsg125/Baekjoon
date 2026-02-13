import java.io.*;
import java.util.*;

class b18185 {

    static int N, sumF, sumB;

    static int[] ramenF;
    static int[] ramenB;

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        N = Integer.parseInt(br.readLine());

        ramenF = new int[N];
        ramenB = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            ramenF[i] = Integer.parseInt(st.nextToken());
            ramenB[N - 1 - i] = ramenF[i];
        }

        for (int i = 0; i < N; i++) {
            while (ramenF[i] > 0) {
                if (i < N - 2 && ramenF[i + 1] > 0 && ramenF[i + 2] > 0) {
                    int minNum = Math.min(ramenF[i], Math.min(ramenF[i + 1], ramenF[i + 2]));
                    sumF += 7 * minNum;
                    ramenF[i] -= minNum;
                    ramenF[i + 1] -= minNum;
                    ramenF[i + 2] -= minNum;
                } else if (i < N - 1 && ramenF[i] > 0 && ramenF[i + 1] > 0) {
                    int minNum = Math.min(ramenF[i], ramenF[i + 1]);
                    sumF += 5 * minNum;
                    ramenF[i] -= minNum;
                    ramenF[i + 1] -= minNum;
                } else if (ramenF[i] > 0) {
                    sumF += 3 * ramenF[i];
                    ramenF[i] = 0;
                }
            }
            while (ramenB[i] > 0) {
                if (i < N - 2 && ramenB[i + 1] > 0 && ramenB[i + 2] > 0) {
                    int minNum = Math.min(ramenB[i], Math.min(ramenB[i + 1], ramenB[i + 2]));
                    sumB += 7 * minNum;
                    ramenB[i] -= minNum;
                    ramenB[i + 1] -= minNum;
                    ramenB[i + 2] -= minNum;
                } else if (i < N - 1 && ramenB[i] > 0 && ramenB[i + 1] > 0) {
                    int minNum = Math.min(ramenB[i], ramenB[i + 1]);
                    sumB += 5 * minNum;
                    ramenB[i] -= minNum;
                    ramenB[i + 1] -= minNum;
                } else if (ramenB[i] > 0) {
                    sumB += 3 * ramenB[i];
                    ramenB[i] = 0;
                }
            }
        }

        System.out.println(Math.min(sumF, sumB));

    }

}