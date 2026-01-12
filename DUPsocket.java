package Udpsocket;

import java.io.IOException;
import java.net.*;

public class Fs {
    public static void main(String[] args){
        DatagramSocket s=null;
        try {
            s=new DatagramSocket();
            byte[] data="你还好吗?".getBytes();
            DatagramPacket pt=new DatagramPacket(data,0,data.length,
                    InetAddress.getByName("localhost"),45612);
            s.send(pt);
            //发送文件
            data=new byte[1024];
            pt=new DatagramPacket(data,data.length);//创造空空间来接受数据报
            s.receive(pt);
            String str=new String(pt.getData(),0,pt.getLength());
            //拼接数据
            IO.println(str);
        } catch (SocketException e) {
            e.printStackTrace();
        } catch (UnknownHostException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } finally{
            try{
                s.close();
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }
}


package Udpsocket;

import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.SocketException;

public class Kf {
    public static void main(String[] args) {
        DatagramSocket s=null;
        try {
            s=new DatagramSocket(45612);
            byte[] bt=new byte[1024];
            DatagramPacket pt=new DatagramPacket(bt,bt.length);
            //创造一片空间,用于等会接收到信息的存放
            IO.println("等待接收信息：");
            s.receive(pt);//等待信息,接收到信息就会放到pt
            String m=new String(pt.getData(),0,pt.getLength());
            //拼接数据
            IO.println(m);
            bt="这是返回信息".getBytes();
            pt=new DatagramPacket(bt,0,bt.length,
                    InetAddress.getByName("localhost"),pt.getPort());
            //这一步是封装数据成数据报的
            //最后两个参数是ip 端口号
            IO.println(pt.getPort());
            s.send(pt);//发送回信
        } catch (SocketException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } finally{
            s.close();
        }
    }
}
