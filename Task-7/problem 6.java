import java.io.*;

class Result {
 // Returns true if n is a Kaprekar number, else false
    public static boolean iskaprekar(long n) {
        int len = String.valueOf(n).length();
        String square = String.valueOf(n * n);
        if(square.length() == 1) return n == 1;
        int d = square.length() - len;
        long r = Long.valueOf(square.substring(0, d)); //must be d digits long       
        long l = Long.valueOf(square.substring(d));//the remaining
        return l + r == n;
    }
    public static void kaprekarNumbers(int p, int q) {
         boolean flag = true;
     for (int i=p; i<=q; i++){
         if(iskaprekar(i)){
         System.out.print(i+" ");
          flag = false;
         }
     }
         System.out.print((flag) ? "INVALID RANGE" : "");
         
    }
}
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int p = Integer.parseInt(bufferedReader.readLine().trim());

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        Result.kaprekarNumbers(p, q);

        bufferedReader.close();
    }
}

