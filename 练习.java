import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        hoduan h=new hoduan();
        h.math=sc.nextInt();
        h.chinese=sc.nextInt();
        h.english=sc.nextInt();
        int s=h.sum();
        double pj=h.pjfen();
        IO.println(s);
        IO.println(pj);
    }
}

public class hoduan {
    int math;
    int chinese;
    int english;
    public int sum()
    {
        return (math+chinese+english);
    }
    public double pjfen()
    {
        return (math+chinese+english);
    }

}
----------------------------------------------------------------
import java.util.Scanner;

public class Main {
    public static void main(String[] age)
    {
        Denglu []ku=new Denglu[30];
        Denglu denglu=new Denglu();
        denglu.name="tmddwy";
        denglu.password="123456";
        Scanner sc=new Scanner(System.in);
        ku[0]=denglu;

        boolean flag=false;
        for(int i=0;i<ku.length;i++)
        {
            IO.println("请输入名字:");
            String mname=sc.next();
            IO.println("请输入密码:");
            String mpassword=sc.next();
            if(ku[i]!=null&&ku[i].name.equals(mname)&&ku[i].password.equals(mpassword))
            {
                flag=true;
                break;
            }
            IO.println("输入错误，请重试");
        }
        if(flag==true)
        {
            IO.println("输入正确");
        }
    }
}


public class Denglu {
    String name;
    String password;
}

