package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       Stack<Character> st1 = new Stack<>();
       Stack<Character> st2 = new Stack<>();
       String s = sc.nextLine();
       for(int i = 0; i < s.length(); i++) {
           char c = s.charAt(i);
           switch (c) {
               case '<':
                   if(!st1.empty()) {
                       st2.push(st1.pop());
                   }   break;
               case '>':
                   if(!st2.empty()) {
                       st1.push(st2.pop());
                   }   break;
               case '-':
                   if(!st1.empty()) st1.pop();
                   break;
               default:
                   st1.push(c);
                   break;
           }
       }
       Stack<Character> p = new Stack<>();
       while(!st1.empty()) {
           p.push(st1.pop());
       }
       while(!p.empty()) {
           System.out.print(p.pop());
       }
       while(!st2.empty()) {
           System.out.print(st2.pop());
       }
    }
    
    public static void main(String[] args) {
	int t = 1;
     //   t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}