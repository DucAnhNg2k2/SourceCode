package runjavacodeptit;

import java.util.Scanner;

public class Main {
	private static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = Integer.parseInt(sc.nextLine()) ;
		for(int j = 1; j <= t; j++) {
			String s = sc.next();
			char[] New = s.toCharArray();
			int ok = 1;
			for(int i = 0 ; i < New.length; i++) {
				if(New[i] == '0') New[i] = '0';
				else if(New[i] == '1') New[i] = '1';
				else if(New[i] == '8') New[i] = '0';
				else if(New[i] == '9') New[i] = '0';
				else ok = 0;
			}
			if(ok == 1) {
				long ans = 0;
				for(int i = 0; i < New.length; i++) {
					ans = ans*10 + Integer.parseInt(String.valueOf(New[i]));
				}
				if(ans == 0) {
					System.out.println("INVALID");
				}
				else {
					System.out.println(ans);
				}
			}
			else System.out.println("INVALID");
		}
	}
}