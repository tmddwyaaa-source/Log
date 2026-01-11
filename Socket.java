package Socket;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

public class Fwsocket {
    public static void main(String[] args) {
        //服务端有两个socket,一个监听一个通信
        ServerSocket ss=null;//监听
        Socket s=null;//通信
        InputStream in=null;
        OutputStream out=null;
        BufferedReader br=null;
        try {
            ss=new ServerSocket(50000);//参数是端口号
            s=ss.accept();
            in=s.getInputStream();//获取输入流的数据
            out=s.getOutputStream();//获取输出流的数据
            br=new BufferedReader(new InputStreamReader(in));
            //贪图缓冲流的一下读一行。将前面获取的数据转化成br可使用的数据
            String str=null;
            while((str=br.readLine())!=null){
                //读取一行不为空，则循环进行
                IO.println("接收的问题为："+str);
            }
            s.shutdownInput();//停止接受输入流数据(不是关闭数据)
            str="问题";//覆盖str
            out.write(str.getBytes());//转化成字节写入输出流
        } catch (IOException e) {
            e.printStackTrace();
        }finally{
            try{//关闭顺序应该是创造对象的反序
                br.close();
                out.close();
                in.close();
                s.close();
                ss.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

package Socket;

import java.io.*;
import java.net.Socket;
import java.util.Scanner;

public class Khsocket {
    public static void main(String[] args) {
        Socket s=null;
        InputStream in=null;
        OutputStream out=null;
        BufferedReader br=null;
        Scanner sc=new Scanner(System.in);
        IO.println("请输入问题，而后我将回答问题");
        try {
            s=new Socket("192.168.112.143",50000);
            //ip地址位可以填localhost,本台机器的意思
            in=s.getInputStream();
            out=s.getOutputStream();
            String str=sc.nextLine();
            out.write(str.getBytes());
            s.shutdownOutput();//关闭获取输出流
            String m="";
            br=new BufferedReader(new InputStreamReader(in));
            while((m=br.readLine())!=null){
                IO.println("获取到的信息是："+m);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }finally{
            try {
                br.close();
                out.close();
                in.close();
                s.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

