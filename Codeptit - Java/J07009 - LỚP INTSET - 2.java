import java.io.File;
import java.io.IOException;
import java.util.Scanner;
import java.util.TreeSet;

class IntSet {
    private TreeSet<Integer> t = new TreeSet<>();
    public IntSet(int []a) {
        for(Integer i: a) {
            t.add(i);
        }
    }

    public boolean isContain(Integer x) {
        return t.contains(x);
    }
    public IntSet intersection(IntSet other) {
        TreeSet<Integer> tree = new TreeSet<>();
        for(Integer i: t) {
            if(other.isContain(i)) {
                tree.add(i);
            }
        }
        int[] ans = new int[tree.size()];
        int idx = 0;
        for(Integer i: tree) {
            ans[idx++] = i;
        }
        return new IntSet(ans);
    }
    @Override
    public String toString() {
        String ans = "";
        for(Integer i: t) {
            ans += String.valueOf(i) + " ";
        }
        return ans;
    }
}

public class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt(), m = sc.nextInt();
//        int a[] = new int[n+5];
//        int b[] = new int[m+5];
//    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.intersection(s2);
        System.out.println(s3);
    }
}