package Yichang;

import java.util.Scanner;

class AgeException extends Exception{
    public AgeException(){

    }
    public AgeException(String s){
        super(s);
        //将字符串传递给Exception
        //即异常报错信息改写
        //默认是null
    }
}
public class Yichang3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        IO.println("name:");
        String name= sc.next();
        IO.println("age:");
        try{
            int age = sc.nextInt();
            if(age<1 || age>100){
                throw new AgeException("年龄不符合人类标准,你是人吗？");
                //改写异常报错信息为括号内的字符串
                //由throw 抛出，这样上面才接受得到
            }
            IO.println("姓名:"+name);
            IO.println("年龄:"+age);
        }catch(AgeException e){
           IO.println(e.getMessage());
           //getMessage返回异常信息描述字符串,即前面改写的
            //IO.println("黑客hahahaha");

        }finally{
            IO.println("END!!!");
        }
        try{
            IO.println(5/0);
        }catch(Exception e){
            IO.println(e.getMessage());
        }

    }
}
