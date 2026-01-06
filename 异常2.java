package Yichang;

import java.util.InputMismatchException;
import java.util.Scanner;

class One{
    int a;
    int b;
    public One(){

    }
    public One(int a,int b){
        this.a=a;
        this.b=b;
    }
    public int errrr(){
        return this.a/this.b;
    }
}
class Two{
    public static void two() throws Exception{
        IO.println(5/0);
    }
}
public class Yic2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
//            IO.println("输入一个数");
//            int a=sc.nextInt();
//            IO.println("输入一个数");
//            int b=sc.nextInt();
//            One one=new One(a,b);
//            one.errrr();
            Two e=new Two();
            e.two();
        }catch(InputMismatchException e){
            IO.println("输入不是数字");
        }
        catch(Exception e){
            IO.println("结果不能为零");
        }finally{
            IO.println("圆满结束吗？？？？");
        }
    }
}
