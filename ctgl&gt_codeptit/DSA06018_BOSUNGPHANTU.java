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
         //        ArrayList<Integer> a = new ArrayList<>();
                 int dem[] = new int [1000005] , Max = -1, Min = 123456 , ans = 0;
                 for(int i = 1 ; i <= n ; i++ ) {
                     int x = sc.nextInt();
                     dem[x]++;
                     Max = Math.max(Max, x);
                     Min = Math.min(Min, x);
                 }
                 for(int i = Min+1 ; i < Max ; i++ ) {
                     if( dem[i] == 0 ) {
                         ans++;
                     }
                 }
                 System.out.println(ans);
         }
         public static void main(String[] args) {
                  int T = 1;
                  T = sc.nextInt();
                  for(int i = 1 ; i <= T ; i++ ) {
                           solve();
                  }
         }
}