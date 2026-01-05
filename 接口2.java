package Jieko;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        Jieko1[] jk1={new Jiafa(),new Jianfa(),new Chengfa(),new Chufa()};
        for(Jieko1 jk:jk1){
            double rst=jk.jieko1(num1,num2);
            IO.println(rst);
        }
    }
}

package Jieko;

public interface Jieko1 {
    int tg=100;
    public double jieko1(int num1,int num2);
}

package Jieko;

public class Jianfa implements Jieko1{
    public double jieko1(int num1,int num2){
        return num1-num2;
    }
}

package Jieko;

public class Jiafa implements Jieko1{
    @Override
    public double jieko1(int num1,int num2){
        return num1+num2;
    }
}

package Jieko;

public class Chufa implements Jieko1{
    public double jieko1(int num1,int num2){
        return (double)num1/num2;
    }
}

package Jieko;

public class Chengfa implements Jieko1{
    public double jieko1(int num1,int num2){
        return num1*num2;
    }
}
