package runjavacodeptit;

import java.io.*;
import java.util.*;

class Rectange {
    private double width;
    private double height;
    private String color;

    public Rectange() {
    }

    public Rectange(double width, double height, String color) {
        this.width = width;
        this.height = height;
        setColor(color);
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        StringBuilder s = new StringBuilder(color.toLowerCase());
        s.setCharAt(0, Character.toUpperCase(s.charAt(0)));
        this.color = s.toString();
    }
    
    public double findArea() {
        return width * height;
    }
    
    public double findPerimeter() {
        return (width + height) * 2;
    }
}
public class Main{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        double x = sc.nextDouble(), y = sc.nextDouble();
        String color = sc.next();
        if(x <= 0 || y <= 0) {
            System.out.println("INVALID");
            return;
        }
        Rectange r = new Rectange(x, y, color);
        double s1 = r.findPerimeter(), s2 = r.findArea();
        if(s1 == (int)s1 ) System.out.print((int)s1 + " ");
        else System.out.print(s1 + " ");
        
        if(s2 == (int)s2 ) System.out.print((int)s2 + " ");
        else System.out.print(s2 + " ");
        
        System.out.println(r.getColor());
    }
}