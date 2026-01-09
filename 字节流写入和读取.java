package liu1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        //字节流写入文件
        FileOutputStream fm=null;
        try{
            fm=new FileOutputStream("C:\\Users\\tmddw\\Desktop\\big.txt");
            String wd="你好你好你好你好你好";
            byte[] bt=wd.getBytes();//以字节的形式写入
            fm.write(bt);//该写入是强制的,如果没有这个文件
            //它将会创建这个文件后再进行写入
            IO.println("写入成功");
        }catch(FileNotFoundException fie){
            IO.println("文件不存在");
        }catch(IOException ie){
            ie.printStackTrace();
        }finally{
            try {
                fm.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        IO.println("-------------------------------------------");
        //字节流读取文件
        FileInputStream fs=null;
        try{
            fs=new FileInputStream("C:\\Users\\tmddw\\Desktop\\big.txt");
            while((fs.available())!=0){
                //available是获取还有多少访问数据的，1个具体的值
                //不为0就代表还有数据可以访问
                byte[] bt=new byte[1024];
                int rd=fs.read(bt);//读取数据,限制在1kb,防止一次访问太多数据出错
                String str=new String(bt,0,rd);
                //利用String的构造方法来将读取的数据转化从字符串
                //String(一次访问多少数据,下标,要转化的数据)
                IO.println(str);
            }
        }catch(FileNotFoundException ft){
            IO.println("文件不存在");
        }catch(IOException ie){
            ie.printStackTrace();
        }finally{
            try {
                fs.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
