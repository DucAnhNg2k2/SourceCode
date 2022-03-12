package javaapplication1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main { 
        public static Scanner sc = new Scanner(System.in);
        public static void main(String[] args) {
                int t = sc.nextInt();
                for(int test  = 1 ; test <=  t ; test++)
                {
                    int n  = sc.nextInt() , m = sc.nextInt();
                    List<Integer> a = new ArrayList<>();
                    List<Integer> b = new ArrayList<>();
                    for(int i = 1 ; i <= n ; i++ ) {
                        int x = sc.nextInt();
                        a.add(x);
                    }
                    for(int i = 1 ; i <= m ; i++ ) {
                        int x = sc.nextInt();
                        b.add(x);
                    }
                    a.addAll(b);
                    Collections.sort(a,new Comparator<Integer>(){
                        @Override
                        public int compare(Integer a,Integer b) {
                            return a.compareTo(b);
                        }
                    });
                    for(Integer i : a) {
                        System.out.print(i + " ");
                    }
                    System.out.println("");
                }
        }
}