import java.io.*;
import java.util.*;

class b18185 {

    static int N, sum, minNum;

    static int[] ramen;

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        N = Integer.parseInt(br.readLine());

        ramen = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            ramen[i] = Integer.parseInt(st.nextToken());
        }

        sum = 0;
        for (int i = 0; i < N; i++) {
            if (ramen[i] == 0)
                continue;

            if (i < N - 2 && ramen[i + 1] <= ramen[i + 2]) {
                minNum = Math.min(ramen[i], ramen[i + 1]);

                sum += 7 * minNum;
                ramen[i] -= minNum;
                ramen[i + 1] -= minNum;
                ramen[i + 2] -= minNum;
            } else if (i < N - 2 && ramen[i] >= ramen[i + 1] - ramen[i + 2]) {
                minNum = ramen[i + 1] - ramen[i + 2];

                sum += 5 * minNum;
                ramen[i] -= minNum;
                ramen[i + 1] -= minNum;

                minNum = Math.min(ramen[i], Math.min(ramen[i + 1], ramen[i + 2]));

                sum += 7 * minNum;
                ramen[i] -= minNum;
                ramen[i + 1] -= minNum;
                ramen[i + 2] -= minNum;
            } else if ((i < N - 2 && ramen[i] < ramen[i + 1] - ramen[i + 2]) || i < N - 1) {
                minNum = Math.min(ramen[i], ramen[i + 1]);

                sum += 5 * minNum;
                ramen[i] -= minNum;
                ramen[i + 1] -= minNum;
            }

            if (ramen[i] > 0) {
                sum += 3 * ramen[i];
                ramen[i] = 0;
            }
        }

        System.out.println(sum);

    }

}

// 앞에서부터 3,2,1개 구매
// 반례 : 1 2 1 1
// 앞, 뒤로 3,2,1개 구매
// 반례 : 1 2 1 2 1
// 무작정 3개를 사지 않고 i+1과 i+2 비교
// 반례 : 4 5 3 1
// i+1>i+2에서 3개를 구매할 수 있음에도 2개를 구매
// i+1에서 i+2를 뺀 만큼만 2개 구매하고 나머지 3개 구매