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
            boolean check = true;
            for(int i = 0; i < s.length(); i++) {
                if(s.charAt(i) == '(') {
                    st.push(0);
                }
//                if(s.charAt(i) == '{') {
//                    st.push(1);
//                }
                if(s.charAt(i) == '[') {
                    st.push(2);
                }
                if(s.charAt(i) == ')') {
                    if(st.empty()) {
                        check = false;
                        break;
                    }
                    int top = st.pop();
                    if(top != 0) {
                        check = false;
                        break;
                    }
                }
//                if(s.charAt(i) == '}') {
//                    if(st.empty()) {
//                        check = false;
//                        break;
//                    }
//                    int top = st.pop();
//                    if(top != 1) {
//                        check = false;
//                        break;
//                    }
//                }
                if(s.charAt(i) == ']') {
                    if(st.empty()) {
                        check = false;
                        break;
                    }
                    int top = st.pop();
                    if(top != 2) {
                        check = false;
                        break;
                    }
                }
            }
if(!st.empty()) check = false;
            if(check) System.out.println("YES");
            else System.out.println("NO");
	}
    }
}