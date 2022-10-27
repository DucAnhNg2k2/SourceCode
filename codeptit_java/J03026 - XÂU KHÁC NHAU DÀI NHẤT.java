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
        String a = sc.nextLine();
        String b = sc.nextLine();
        int ans = -1;
        for(int i = 0; i < a.length(); i++) {
            String s = "";
            for(int j = i; j < a.length(); j++) {
                s += a.charAt(j);
                if(!b.contains(s)) {
                    ans = Math.max(s.length(), ans);
                }
            }
        }
        
        for(int i = 0; i < b.length(); i++) {
            String s = "";
            for(int j = i; j < b.length(); j++) {
                s += b.charAt(j);
                if(!a.contains(s)) {
                    ans = Math.max(s.length(), ans);
                }
            }
        }
        System.out.println(ans);
    }
    
    Run() {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
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
