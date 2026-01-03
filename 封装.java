package Fengz;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Fengz fz=new Fengz();
        //无封装
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int age = sc.nextInt();
        fz.name=name;
        fz.age=age;
        IO.println("名字"+fz.name+",年龄"+fz.age);
        //有封装
        fz.getname("张三");
        fz.getage(34);
        name=fz.setname();
        age=fz.setage();
        IO.println("名字"+fz.name+",年龄"+fz.age);
    }
}

package Fengz;

public class Fengz {
    //成员变量
    String name;
    int age;

    //成员方法
    public void getname(String name){
        this.name=name;
    }
    public String setname(){
        return this.name;
    }
    public void getage(int age){
        this.age=age;
    }
    public int setage(){
        return this.age;
    }
}
