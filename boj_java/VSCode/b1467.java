import java.io.*;
import java.util.*;

class b1467 {

    static int N, M;

    static int[] num;
    static int[] numDelete;

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        num = Arrays.stream(br.readLine().split("")).mapToInt(Integer::parseInt).toArray();
        N = num.length;
        numDelete = Arrays.stream(br.readLine().split("")).mapToInt(Integer::parseInt).toArray();
        M = numDelete.length;

    }

}
