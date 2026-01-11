package Xinacchi;

public class Mytest implements Runnable{
    String name;
    public Mytest() {

    }
    public Mytest(String name){
        this.name=name;
    }
    @Override
    public void run() {
        IO.println(this.name+"进程进行中.....");
    }
}

package Xinacchi;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Main {
    public static void main(String[] args) {
        //线程池
        ExecutorService ese= Executors.newFixedThreadPool(2);
        //搭建线程池对象,括号里面的2是可容纳线程数
        Runnable r1=new Mytest("一号");
        Runnable r2=new Mytest("二号");
        Runnable r3=new Mytest("三号");
        //创造3个线程
        ese.submit(r1);
        ese.submit(r2);
        ese.submit(r3);
        //将3个线程放入线程池中
        ese.shutdown();
        //关闭线程池！！！
    }
}
