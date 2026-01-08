package Enum;

public enum Sex {
    he,she;
}

package Enum;

public class Student {
    String name;
    Sex sex;
}

package Enum;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        //enum
        Student s=new Student();
        s.name="海绵宝宝";
        s.sex=Sex.he;
        IO.println(s.name);
        IO.println(s.sex);
        //基本类型到包装类型
        Integer i= 1;
        Double d=2.7;
        Character c='r';
        Boolean b=true;
        //包装类型到基本类型
        int litterint = i.intValue();
        double v = d.doubleValue();
        char c1 = c.charValue();
        boolean b1 = b.booleanValue();
        //List<int> nb1=new ArrayList();  //error
        //泛型不能是基本类，但是包装类可以
        List<Integer> nb1=new ArrayList();
        nb1.add(1);
        //Math
        int a=Math.max(38,12);//判断那个大
        IO.println(a);//打印38
        int a1=Math.abs(-1231);//绝对值
        IO.println(a1);
        double a2=Math.pow(2.0,3.0);
        //老朋友了不过要注意参数是double类型
        IO.println(a2);//打印8.0

    }
}
