package Gozhao;

public class Main {
    public static void main(String[] args) {
        //构造方法
        Goz goz=new Goz();
        Goz goz2=new Goz(23);
        Goz goz3=new Goz('e');

        //重构方法
        goz.haod(12,'t');
        goz.haod('a',92);

        //static
        jingtai jt=new jingtai();
        jingtai jt2=new jingtai();//静态代码只进行了一次
    }
}
package Gozhao;

public class Goz {
    public int shuz;
    public char zhifu;

    public Goz(){
        IO.println("kaka");
    }
    //重构
    public Goz(int gb){
        IO.println("nokaka");
    }

    public Goz(String zhifu){
        IO.println("nonokaka");
    }
    public void haod(int shuz,char zhifu){
        this.shuz=shuz;     //this.(成员变量)用来替代，防止重名报错
        this.zhifu=zhifu;
        IO.println("重构1");
    }
    public void haod(char zhifu,int shuz) {      //重构，顺序不同
        this.shuz = shuz;     //this.(成员变量)用来替代，防止重名报错
        this.zhifu = zhifu;
        IO.println("重构2");
    }
}
package Gozhao;

public class jingtai {
    static int n=100;
    static{
        n+=100;
        IO.println(n);
    }
    static{
        n+=400;
        IO.println(n);
    }
}

