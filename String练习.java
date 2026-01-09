package lianxi_16;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int big=0,small=0,math=0;
        IO.println("请输入字符串");
        String why=sc.next();
        char[] whys=why.toCharArray();
        for(char w:whys){
            if(w>='a'&&w<='z'){
                small++;
            }else if(w>='A'&&w<='Z'){
                big++;
            }else{
                math++;
            }
        }
        IO.println("big="+big+" small="+small+" math="+math);
    }
}
