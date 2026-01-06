package Yichang;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int j=sc.nextInt();
        try{
            int num=n/j;
            IO.println("num="+num);
        }catch(Exception e){
            System.err.println("此程序报错，不能为零");
        }finally{
            IO.println("程序结束");
        }
    }
}
