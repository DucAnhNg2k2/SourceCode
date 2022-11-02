package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int ii = 1; ii <= t; ii++) {
            String s = sc.nextLine();
            Stack<Integer> st = new Stack<Integer>();
            int dem = 1;
            for(int i = 0; i < s.length(); i++) {
                if(s.charAt(i) == '(') {
                    st.push(dem);
                    System.out.print(dem + " ");
                    dem++;
                }
                if(s.charAt(i) == ')') {
                    System.out.print(st.pop() + " ");
                }
            }
            System.out.println("");
	}
    }
}