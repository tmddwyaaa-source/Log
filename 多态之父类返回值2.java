package Duotai2;

import java.util.Random;

public class Main {
    public static void main(String[] args){
       Dangao ms=new Ms();
       Dangao pf=new Pf();
       Scdg scdg=new Scdg();
       Random random=new Random();
       String[] name={"ms","pf"};
       int[] size={4,8};
       for(String s:name){
           int sum=random.nextInt(2);
           Dangao dangao=scdg.dg(s);
           dangao.leix(s,size[sum]);
       }

    }
}

package Duotai2;

public abstract class Dangao {
    public abstract void leix(String name,int size);
}

package Duotai2;

public class Pf extends Dangao {
    @Override
    public void leix(String name,int size){
        IO.println("蛋糕品种:"+name+",尺寸:"+size);
    }
}

package Duotai2;

public class Ms extends Dangao{
    @Override
    public void leix(String name,int size){
        IO.println("蛋糕品种:"+name+",尺寸:"+size);
    }
}

package Duotai2;

public class Scdg {
    public Dangao dg(String name){
        Dangao dangao;
        if(name.equals("ms")){
            dangao=new Ms();
        }else{
            dangao =new Pf();
        }
        return dangao;
    }
}
