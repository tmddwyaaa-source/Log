package Xianc2;

public class Myrunnable implements Runnable{
    public synchronized void t1(){
        //synchronized同步线程关键词,可以同步线程
        for(int i=0;i<10;i++){
            IO.print(Thread.currentThread().getName()+" 循环次数:"+(i+1)+" ");
            IO.print("害");
            IO.print("怕");
            IO.print("黑");
            IO.print("暗");
            IO.println();
        }
    }
    public synchronized void t2(){
        for(int i=0;i<10;i++){
            IO.print(Thread.currentThread().getName()+" 循环次数:"+(i+1)+" ");
            IO.print("不");
            IO.print("在");
            IO.print("迷");
            IO.print("茫");
            IO.println();
        }
    }
    @Override
    public void run() {
        t1();
        t2();
    }
}

package Xianc2;

import Xianc2.Myrunnable;

public class Duoxinac {
    public static void main(String[] args) {
        Myrunnable m = new Myrunnable();
        Thread t1 = new Thread(m);
        t1.start();
        Thread t2 = new Thread(m);
        t2.start();
        //多线程同时运行不是真同步,是其中几个线程轮流获得执行权
        //交替使用。所以就导致了使用多线程时逻辑混乱,没有顺序相互争抢
        //所以有了synchronized关键字
    }
}
