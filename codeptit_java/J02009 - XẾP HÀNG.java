package runjavacodeptit;
import java.io.*;
import java.util.*;

interface AB {
    public void setStart(int i);
    public void setEnd(int i);
    public int getStart();
    public int getEnd();
}
class A implements AB, Comparable<A> {
    public int s,t;
    @Override
    public int getStart() {
        return s;
    }
    @Override
    public int getEnd() {
        return t;
    }
    @Override
    public void setStart(int i) {
        this.s = i;
    }
    @Override
    public void setEnd(int i) {
        this.t = i;
    }
    @Override
    public int compareTo(A a) {
        return this.getStart() - a.getStart();
    }
}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<A> a = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            A o = new A();
            o.setStart(sc.nextInt());
            o.setEnd(sc.nextInt());
            a.add(o);
        }
        Collections.sort(a);
        int time = 0;
        for(A i:a) {
            if(time < i.getStart()) time = i.getStart();
            time += i.getEnd();
        }
        System.out.println(time);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}