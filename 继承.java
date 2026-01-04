package jicheng;

public class Main {
    public static void main(String[] args)
    {
        Fulei fl=new Fulei(2);

        Zilei z=new Zilei("张三",19);
        Zilei z2=new Zilei("张三",19);
        IO.println(z.equals(z2));

    }
}

package jicheng;

public class Fulei {
    String name;
    int age;

    public Fulei(int q)
    {
        IO.println("goz1启动");
    }
}

package jicheng;

public class Zilei extends Fulei {
    public Zilei(String name,int age)
    {
        //super调用父类构造方法只能是子类构造方法里面
        //还是子类构造方法里所有super调用的最前面使用
        //super.age=age;
        //super.name=name;
        super(3);
        IO.println("goz2启动");
        IO.println("名字:"+super.name+" 年龄:"+super.age);
    }
}
