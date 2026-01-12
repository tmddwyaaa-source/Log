package Socket3;

import java.io.IOException;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Fwsocket {
    public static void main(String[] args){
        ServerSocket ss=null;
        Socket s=null;
        try{
            ss=new ServerSocket(61132);
            //端口号不能太大,至多也得是66666以内
            while(true){
                s=ss.accept();
                MyThread mt1=new MyThread(s);
                mt1.start();
            }
        }catch(IOException e){
            e.printStackTrace();
        }finally{
            try{
                s.close();
                ss.close();
            }catch(IOException e){
                e.printStackTrace();
            }
        }
    }
}

package Socket3;

import java.io.Serializable;

public class Info implements Serializable {
    String name;
    String possword;
    public Info(){

    }
    public Info(String name, String possword) {
        this.name = name;
        this.possword = possword;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getPossword() {
        return possword;
    }
    public void setPossword(String possword) {
        this.possword = possword;
    }
}

package Socket3;

//import Socket2.Info;

import java.io.*;
import java.net.Socket;

public class MyThread extends Thread{
    Socket s=null;

    public MyThread(){

    }
    public MyThread(Socket s){
        this.s=s;
    }
    @Override
    public void run() {
        InputStream in=null;
        OutputStream out=null;
        ObjectInputStream ois=null;
        try{
            in=s.getInputStream();
            out=s.getOutputStream();
            ois=new ObjectInputStream(in);//反序列化数据
            Info info=(Info)ois.readObject();
            IO.println("账户名为："+info.getName());
            IO.println("密码为："+info.getPossword());
            s.shutdownInput();
            String fhui="服务器已接受消息";
            out.write(fhui.getBytes());
        }catch(IOException e){
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } finally {
            try {
                ois.close();
                out.close();
                in.close();
                s.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
}

package Socket3;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Khsocket {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Socket s = null;
        InputStream in = null;
        OutputStream out = null;
        ObjectOutputStream oos = null;
        BufferedReader br = null;
        try {
            s=new  Socket("localhost",61132);
            in=s.getInputStream();
            out=s.getOutputStream();
            oos=new ObjectOutputStream(out);
            IO.println("输入账户名:");
            String name=sc.nextLine();
            IO.println("输入密码：");
            String pwd=sc.nextLine();
            Info info=new Info(name,pwd);
            oos.writeObject(info);
            s.shutdownOutput();
            br=new BufferedReader(new InputStreamReader(in));
            String n=null;
            while((n=br.readLine())!=null){
                IO.println("接收到的服务器信息："+n+"\t爱来自"+s.getLocalPort());
                //getLocalPort获取当前端口号
            }
        } catch (IOException e) {
            e.printStackTrace();
        }finally{
            try {
                br.close();
                oos.close();
                out.close();
                in.close();
                s.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

        }
    }
}

package Socket3;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Khsocket2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Socket s = null;
        InputStream in = null;
        OutputStream out = null;
        ObjectOutputStream oos = null;
        BufferedReader br = null;
        try {
            s=new  Socket("localhost",61132);
            in=s.getInputStream();
            out=s.getOutputStream();
            oos=new ObjectOutputStream(out);
            IO.println("输入账户名:");
            String name=sc.nextLine();
            IO.println("输入密码：");
            String pwd=sc.nextLine();
            Info info=new Info(name,pwd);
            oos.writeObject(info);
            s.shutdownOutput();
            br=new BufferedReader(new InputStreamReader(in));
            String n=null;
            while((n=br.readLine())!=null){
                IO.println("接收到的服务器信息："+n+"\t爱来自"+s.getLocalPort());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }finally{
            try {
                br.close();
                oos.close();
                out.close();
                in.close();
                s.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

        }
    }
}
