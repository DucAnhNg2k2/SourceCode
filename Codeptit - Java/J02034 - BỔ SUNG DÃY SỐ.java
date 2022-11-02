/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.mavenproject1;

import java.io.*;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author ADMIN
 */

class Run {
    Scanner sc = new Scanner(System.in);
    void solve() {
        int n = Integer.parseInt(sc.nextLine());
        int val = -1;
        boolean[] vs = new boolean[205];
        for(int i = 0 ; i <= 200; i++) {
            vs[i] = false;
        }
        boolean check = true;
        for(int i = 1; i <= n; i++) {
            int x = sc.nextInt();
            vs[x] = true;
            val = Math.max(val, x);
        }
        for(int i = 1; i <= val; i++) {
            if(!vs[i]) {
                check = false;
                System.out.println(i);
            }
        }
        if(check) {
            System.out.println("Excellent!");
        }
    }
    
    Run() {
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}

public class Mavenproject1 {
    public static void main(String[] args) {
        new Run();
    }
}
