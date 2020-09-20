import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a, p, max = 0;
        int n = in.nextInt(), x, id = 1;
        p = in.nextLong();
        x = in.nextInt();
        for(int i = 1; i <= n; i++){
            a = in.nextLong();
            if(a * p > max){
                max = a * p;
                id = i;
            }
            p -= x;
        }
        System.out.println(id);
    }
}