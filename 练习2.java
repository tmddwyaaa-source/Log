package tushu;

import java.util.Scanner;

public class Jiemian {
    public static void main(String[] args)
    {
        guanlisk gl = new guanlisk();
        Scanner sc=new Scanner(System.in);
        boolean z=true;
        Shuku shuku=new Shuku();
        gl.glisk();
        do
        {
            IO.println("1.展示图书");
            IO.println("2.添加图书");
            IO.println("请输入数字:");
            int n=sc.nextInt();
            switch(n)
            {
                case 0:
                    IO.println("退出");
                    z=false;
                    break;
                case 1:
                    gl.dayinsk();
                    break;

                case 2:
                    IO.println("请输入书名");
                    shuku.bookname=sc.next();
                    IO.println("请输入作者");
                    shuku.zuoz=sc.next();
                    IO.println("请输入价格");
                    shuku.jiage=sc.nextInt();
                    boolean flag=gl.addsk(shuku);
                    if(flag)
                    {
                        IO.println("添加成功");
                    }
                    else
                    {
                        IO.println("添加失败");
                    }
                    break;
                default:
                    IO.println("输入错误，请重试");
            }
        }while(z);
    }
}
package tushu;


public class guanlisk {
    Shuku[] shuk=new Shuku[50];
    public void glisk()
    {
        Shuku shuku=new Shuku();
        shuku.bookname="平凡的世界";
        shuku.zuoz="路遥";
        shuku.jiage=30;
        shuk[0]=shuku;

        Shuku shuku2=new Shuku();
        shuku2.bookname="悟空传";
        shuku2.zuoz="今何在";
        shuku2.jiage=30;
        shuk[1]=shuku2;
    }
    public void dayinsk()
    {
        IO.println("书名\t\t作者名\t\t价格");
        for(int i=0;i<shuk.length;i++)
        {
            if(shuk[i]!=null)
            {
                IO.println(shuk[i].bookname+"\t\t"+shuk[i].zuoz+"\t\t"+shuk[i].jiage);
            }
        }
    }
    public boolean addsk(Shuku sk)
    {
        boolean flag=false;
        for(int i=0;i<shuk.length;i++)
        {
            if(shuk[i]==null)
            {
                   shuk[i]=sk;
                   flag=true;
                   break;
            }
        }
        return flag;
    }
}
package tushu;

public class Shuku {
    String bookname;
    String zuoz;
    int jiage;

}

