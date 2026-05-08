package Liu.huancongliu;

import java.io.*;

public class Main {
    public static void main(String[] args){
        BufferedWriter bw=null;     //子类
        Writer w=null;              //bw的父类
        try{
            w=new FileWriter("C:\\Users\\user\\Desktop\\缓冲流.txt");
            bw=new BufferedWriter(w);
            bw.write("咕咕嘎嘎咕咕嘎嘎!!!!!!!!!");
            IO.println("写入成功");
        }catch(Exception e){
            e.printStackTrace();
        }finally{
            try{
                bw.close();     //注意顺序，先关闭子类，再关闭父类
                w.close();
            }catch(Exception e){
                e.printStackTrace();
            }
        }
        IO.println("------------------------------------");
        BufferedReader br=null;
        Reader r=null;
        try{
            r=new FileReader("C:\\Users\\user\\Desktop\\缓冲流.txt");
            br=new BufferedReader(r);           //父类接收地址，子类接收父类
            String str=br.readLine();           //br特有的Line方法，一次读一行
            while(str!=null){
                IO.println(str);
                str=br.readLine();
            }
        }catch(FileNotFoundException fe){
            IO.println("文件不存在");
        }catch(Exception e){
            e.printStackTrace();
        }finally{
            try{
                br.close();
                r.close();
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }
}
