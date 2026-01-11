package Xianchengjingcheng;

public class Xinac {
    public static void main(String[] args) {
        //使用Thread来打印当前进行的线程
        Thread t1=new Thread();
        IO.println(t1.currentThread().getName()+"vvvvvv");
        MyThread mt2=new MyThread();
        mt2.start();
        IO.println("-----------------------------------------------------");
        Myrunnable r1=new Myrunnable();
        Thread t2=new Thread(r1);//因为runnable没有start方法,要借用thread的方法
        t2.start();//注意打印的结果是main的打印结果先出来,然后再是两个自定义方法(mt mr)的打印
    }
}

package Xianchengjingcheng;

public class Myrunnable implements Runnable{
    @Override
    public void run() {
        for(int i=0;i<10;i++){
            IO.println(Thread.currentThread().getName()+"循环次数:"+(i+1));
        }
    }
}

package Xianchengjingcheng;

public class MyThread extends Thread{
    @Override
    public void run(){
        for(int i=0;i<10;i++){
            IO.println(Thread.currentThread().getName()+" 循环次数为："+(i+1));
        }
    }
}
