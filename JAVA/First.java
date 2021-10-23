package JAVA;

import java.util.Scanner;

public class First {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                sc.nextLine();
                String fs1 = String.format("%s",s1);
                String fx = String.format("%15d",x);
                System.out.printf(fs1);
                System.out.println();
                System.out.println();
            }
            System.out.println("================================");
            sc.close();
    }
}