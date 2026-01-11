package Socket2;

import java.io.Serializable;

public class Info implements Serializable {
    //一个类要想在网络上传播，就必须实现Serializable
    String name;
    String possword;
    public Info(){

    }
    public Info(String name,String possword){
        this.name=name;
        this.possword=possword;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setPossword(String possword){
        this.possword=possword;
    }
    public String getName(){
        return this.name;
    }
    public String getPossword(){
        return this.possword;
    }
}


package Socket2;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

public class FwSocket {
    public static void main(String[] args){
        ServerSocket ss=null;
        Socket s=null;
        ObjectInputStream ois=null;
        InputStream in=null;
        OutputStream out=null;
        try {
            ss=new ServerSocket(64871);
            s=ss.accept();
            in=s.getInputStream();
            ois=new ObjectInputStream(in);//反序列化
            out=s.getOutputStream();
            Info io=(Info)ois.readObject();
            //将反序列化的数据写入Info
            IO.println("账号："+io.getName());
            IO.println("密码："+io.getPossword());
            s.shutdownInput();//关闭访问输入数据
            String str="服务器返回消息";
            out.write(str.getBytes());
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } finally{
            try {
                ois.close();
                in.close();
                out.close();
                s.close();
                ss.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
}

package Socket2;

import java.io.*;
import java.net.Socket;
import java.util.Scanner;

public class Khsocket {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Socket s=null;
        InputStream in=null;
        OutputStream out=null;
        ObjectOutputStream oos=null;
        BufferedReader br=null;
        try {
            s=new Socket("localhost",64871);
            in=s.getInputStream();
            out=s.getOutputStream();
            oos=new ObjectOutputStream(out);
            IO.println("请输入账户：");
            String name=sc.nextLine();
            IO.println("请输入密码：");
            String pwd=sc.nextLine();
            Info info=new Info(name,pwd);
            oos.writeObject(info);
            s.shutdownOutput();//关闭输出数据的访问
            String ms=null;
            br=new BufferedReader(new InputStreamReader(in));
            while((ms=br.readLine())!=null){
                System.out.println("接受到的信息是："+ms);
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
