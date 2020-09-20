import java.io.*;
import java.util.StringTokenizer;

public class Solution {

    public static void main(String[] args) {
        FastScanner scanner = new FastScanner(System.in);
        int tt = scanner.nextInt();
        String ans = "-1";
        long min = Long.MAX_VALUE;
        for(int i = 0; i < tt; i++) {
            String str = scanner.next();
            String val = scanner.next();
            boolean isOk = true;
            if ( val.length() > 1 ) {
                int fours = 0;
                int sevens = 0;
                for (int j = 0; j < val.length(); j++) {
                    if ( val.charAt(j) == '7' ) ++sevens;
                    else if ( val.charAt(j) == '4' ) ++fours;
                    else {
                        isOk = false;
                        break;
                    }
                }
                
                if ( isOk && sevens > 0 && sevens == fours ) {
                    long possibleMin = Long.parseLong(val);
                    if ( min > possibleMin ) {
                        min = possibleMin;
                        ans = str;
                    }
                }
            }
        }
 
        PrintWriter printWriter = new PrintWriter(System.out);
        printWriter.printf("%s\n", ans);
        printWriter.close();
    }
    
    static class FastScanner {
        private BufferedReader reader = null;
        private StringTokenizer tokenizer = null;
 
        public FastScanner(InputStream in) {
            reader = new BufferedReader(new InputStreamReader(in));
            tokenizer = null;
        }
 
        public String next() {
            if (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }
         
        public int nextInt() {
            return Integer.parseInt(next());
        }
 
    }
}