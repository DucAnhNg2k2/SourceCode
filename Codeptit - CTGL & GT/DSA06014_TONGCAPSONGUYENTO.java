package javaapplication1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main {
         public static Scanner sc = new Scanner(System.in);
         public static int maxn = 1000005;
         public static boolean IsPrime[] = new boolean[maxn];
         public static void eratosthenes() {
                for(int i = 2 ; i < maxn ; i++ ) {
                    IsPrime[i] = true;
                }
                for(int i = 2 ; i*i < maxn ; i++ ) {
                    if( IsPrime[i] == true ) {
                        for(int j = i*i ; j < maxn ; j += i) {
                            IsPrime[j] = false;
                        }
                    }
                }
         }
         public static void solve() {
                    int n = sc.nextInt();
                    for(int i = 2 ; i <= n ; i++ ) {
                        if( IsPrime[i] && IsPrime[n-i] ) {
                            System.out.println(i + " " + (n-i));
                            return;
                        }
                    }
                    System.out.println(-1);
         }
         public static void main(String[] args) {
                  eratosthenes();
                  int T = 1;
                  T = sc.nextInt();
                  for(int i = 1 ; i <= T ; i++ ) {
                           solve();
                  }
         }
}