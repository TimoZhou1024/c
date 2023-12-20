import java.util.Scanner;
import java.lang.Math;
public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n,s,t,x,y,a,b;
        n=scanner.nextLong();
        s=scanner.nextLong();
        t=scanner.nextLong();
        x=scanner.nextLong();
        y=scanner.nextLong();
        a=scanner.nextLong();
        b=scanner.nextLong();
        x*=n;y*=n;
        if (x<s) {t+=s-x;s=x;}
        System.out.println(a*Math.max(0,x-s)+b*Math.max(0,y-t));
        scanner.close();
    }
}