import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char c=scanner.next().charAt(0);
        String s=scanner.next();
        int now=c=='E'?0:1;
        for (int i=0;i<s.length();i++){
            now^=s.charAt(i)-'0';
        }
        System.out.println(now);
        scanner.close();
    }
}