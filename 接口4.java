package Jieko4;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        IO.println("正方形1,长方形2");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Fangkuai fk=null;
        switch(n){
            case 1:
                    IO.println("请输入边长");
                    double a=sc.nextDouble();
                    fk=new Zfx(a);
                    break;
            case 2:
                IO.println("长和宽");
                double b=sc.nextDouble();
                double c=sc.nextDouble();
                fk=new Cfx(b,c);
                break;
        }
        IO.println("面积为"+fk.fangkuai());
    }
}

package Jieko4;

public interface Fangkuai {
    public double fangkuai();
}

package Jieko4;

public class Zfx implements Fangkuai {
    double b;
    public Zfx(){

    }
    public Zfx(double b){
        this.b=b;
    }
    @Override
    public double fangkuai() {
        return b*b;
    }
}

package Jieko4;

public class Cfx implements Fangkuai{
    double c;
    double k;
    public Cfx(){

    }
    public Cfx(double c,double k){
        this.c = c;
        this.k = k;
    }
    @Override
    public double fangkuai() {
        double x=c*k;
        return x;
    }
}
