package Choxiang;

public class Main {
    public static void main()
    {
        //报错,抽象类不能创造对象
        //choxiang cx=new choxiang();
    }
}

package Choxiang;

public abstract class choxiang {
    public abstract void ccx();
    int age;
    String name;

}

package Choxiang;

public abstract class axzilei extends choxiang{
    public void haod()
    {
        IO.println("hello");
    }
    public void kka()
    {
        IO.println("world");
    }
}
