import java.util.Scanner;
public class Main{
    public static Scanner scanner = new Scanner(System.in);
    public class node{
        int x; char y;
    }
    public static node a[]=new node[5];
    public static int checknum(char c){
        if (c>='2'&&c<='9') {
            return c-'0';
        }
        if (c=='T') return 10;
        if (c=='J') return 11;
        if (c=='Q') return 12;
        if (c=='K') return 13;
        if (c=='A') return 14;
        return 0;
    }
    public static void Mainn(){
        for (int i=0;i<5;i++){
            char c1,c2;
            String temp=scanner.next();
            c1=temp.charAt(0);c2=temp.charAt(1);
            a[i].x=checknum(c1);
            a[i].y=c2;
        }
        boolean suit=true;
        for (int i=0;i<4;i++) if (a[i].y!=a[i+1].y) suit=false; // 鍒ゆ柇鑺辫壊
        int mp[]=new int[20];
        for (int i=0;i<19;i++) mp[i]=0;
        for (int i=0;i<5;i++) mp[a[i].x]++;
        int dui1=0,dui2=0;
        for (int i=2;i<=14;i++){
            if (dui1==0&&mp[i]>1) dui1=mp[i];
            else if (mp[i]>1) dui2=mp[i]; 
        }
        int shunz=1;
        for (int i=0;i<5;i++){
            for (int j=0;j<4;j++){
                if(a[j].x>a[j+1].x){
                    node temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for (int i=0;i<4;i++) if (a[i].x!=a[i+1].x-1) shunz=0;
        if (mp[2]==1&&mp[3]==1&&mp[4]==1&&mp[5]==1&&mp[14]==1) shunz=1;
        if (mp[10]==1&&mp[11]==1&&mp[12]==1&&mp[13]==1&&mp[14]==1)shunz=2; // 鍒ゆ柇椤哄瓙
        if (suit&&shunz==2) System.out.println("Royal flush");
        else if (suit&&shunz==1) System.out.println("Straight flush");
        else if (dui1==4) System.out.println("Four of a kind");
        else if (dui1+dui2==5) System.out.println("Full house");
        else if (suit) System.out.println("Flush");
        else if (shunz>0) System.out.println("Straight");
        else if (dui1==3) System.out.println("Three of a kind");
        else if (dui1==2&&dui2==2) System.out.println("Two pairs");
        else if (dui1==2) System.out.println("Pair");
        else System.out.println("Highcard");
    }
    public static void main(String[] args) {
        int T;T=scanner.nextInt();
        Main useless=new Main();
        for (int i=0;i<5;i++) a[i]=useless.new node();
        while ((T--)!=0) Mainn();
        scanner.close();
    }
}