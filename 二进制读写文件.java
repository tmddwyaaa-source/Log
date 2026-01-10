package liu4;

import java.io.*;

public class Main {
    public static void main(String[] args) {
        //二进制流读取写入----试试复制
        FileInputStream fis = null;
        FileOutputStream fos = null;
        DataInputStream dis = null;//二进制读取
        DataOutputStream dos = null;//二进制写入
        try {
            fis=new FileInputStream("C:\\Users\\tmddw\\Desktop\\file方法.java");
            //获取源文件的路径,就是要动手脚的目标
            dis=new DataInputStream(fis);//读取源文件信息
            fos=new FileOutputStream("C:\\Users\\tmddw\\Desktop\\file复制体.java");
            //获取目标文件的路径,就是等会动完手后要把它扔到的位置
            dos=new DataOutputStream(fos);//读取目标文件信息
            int data;
            while((data=dis.read())!=-1){
                //使用read读取,如果读取出来是空,返回-1,循环结束
                //读取方法的底层逻辑
                dos.write(data);
                //注意,这里使用的两个方法都是二进制工具的方法
            }
            IO.println("复制成功");
        } catch (FileNotFoundException e) {
            IO.println("文件不存在");
        }catch(IOException e){
            e.printStackTrace();
        }finally{
            try {
                fis.close();
                fos.close();
                dis.close();
                dos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

        }
    }
}
