package Fanxinglianxi;

public class Student {
    String id;
    String name;
    int age;

    public Student() {

    }
    public Student(String id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }
}

package Fanxinglianxi;

import java.util.ArrayList;
import java.util.List;

public class Studentguanli {
    List<Student> list = new ArrayList<Student>();
    public boolean addstudent(Student st){
        boolean flag=list.add(st);
        return flag;
    }
    public void printAll(){
        IO.println("学号'\t'姓名'\t'年龄");
        for(Student s: list){
            IO.println(s.id+"\t"+s.name+"\t"+s.age);
        }
    }

}

package Fanxinglianxi;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Studentguanli scg=new Studentguanli();
        Scanner sc=new Scanner(System.in);
        String juez="yes";
        while(juez.equals("yes")){
            IO.println("输入学号");
            String id=sc.next();
            IO.println("输入姓名");
            String name=sc.next();
            IO.println("输入年龄");
            int age=sc.nextInt();
            Student s=new Student(id,name,age);
            boolean flag=scg.addstudent(s);
            if(flag){
                IO.println("添加成功");
            }
            IO.println("需要添加新成员吗？(yes/no)");
            juez=sc.next();
        }
        scg.printAll();
    }
}
