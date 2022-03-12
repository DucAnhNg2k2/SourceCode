package javaapplication1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main {
         public static Scanner sc = new Scanner(System.in);
         public static void solve() {
                  int n = sc.nextInt();
                  List<Integer> a = new ArrayList<Integer>();
                  for(int i = 1 ; i <= n ; i++ ) {
                           int x = sc.nextInt();
                           a.add(x);
                   }
                   Integer Min1 = 123456789 , Min2 = 123456789;
                   for(Integer i : a) {
                        if( Min1.compareTo(i) == 1) {
                            Min1 = i;
                        }
                   }
                   for(Integer i : a) {
                       if( Min1.compareTo(i) < 0) {
                           if( Min2.compareTo(i) == 1 ) {
                               Min2 = i;
                           }
                       }
                   }
                   if( Min2.compareTo(123456789) == 0 ) System.out.println(-1);
                   else System.out.println(Min1 + " " + Min2);
         }
         public static void main(String[] args) {
                  int T = 1;
                  T = sc.nextInt();
                  for(int i = 1 ; i <= T ; i++ ) {
                           solve();
                  }
         }
}