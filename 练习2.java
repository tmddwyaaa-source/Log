package tushu;

import java.util.Scanner;

public class Jiemian {
    public static void main(String[] args)
    {
        guanlisk gl = new guanlisk();
        Scanner sc=new Scanner(System.in);
        while(n)
        {
            IO.println("1.展示图书");
            IO.println("2.添加图书");
            IO.println("请输入数字:");
            int n=sc.nextInt();
            switch(n)
            {
                case 0:
                    IO.println("退出");
                    break;
                case 1:
                    gl.dayinsk();
                    break;

                case 2:
                    break;
                default:
                    IO.println("输入错误，请重试");
            }
        }
    }
}
package tushu;

public class guanlisk {
    Shuku[] shuk=new Shuku[50];
    public void guanlisk()
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

}
package tushu;

public class Shuku {
    String bookname;
    String zuoz;
    int jiage;

}

