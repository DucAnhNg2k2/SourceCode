package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static boolean solve() {
        String s = sc.nextLine();
        Stack<Character> st = new Stack<>();
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c == '{') {
                st.push(c);
            }
            if(c == '[') {
                st.push(c);
            }
            if(c == '(') {
                st.push(c);
            }
            if(c == '}') {
                if(st.empty()) return false;
                if(st.peek() != '{') return false;
                st.pop();
            }
            if(c == ')') {
                if(st.empty()) return false;
                if(st.peek() != '(') return false;
                st.pop();
            }
            if(c == ']') {
                if(st.empty()) return false;
                if(st.peek() != '[') return false;
                st.pop();
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            if(solve()) System.out.println("YES");
            else System.out.println("NO");
	}
    }
}