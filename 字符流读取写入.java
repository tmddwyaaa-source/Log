package Liu2;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        //字符流写入
        FileWriter fw=null;
        try {
            fw=new FileWriter("C:\\Users\\tmddw\\Desktop\\tetets.txt");
            String str="i哪里发链接肥牛饭----------靓仔啦";
            fw.write(str);
            fw.flush();//刷新缓存
            IO.println("写入成功");
        } catch (IOException e) {
            e.printStackTrace();
        }finally{
            try {
                fw.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        IO.println("------------------------------------------------------");
        //字符流读取
        FileReader fr=null;
        StringBuffer sb=new StringBuffer();
        try{
            fr=new FileReader("C:\\Users\\tmddw\\Desktop\\tetets.txt");
            char[] cr=new char[1024];
            int hs=fr.read(cr);
            while(hs!=-1){
                sb.append(cr,0,hs);
                hs=fr.read(cr);//要放在下面,放上面会多读取一次,然后报错
            }
        IO.println(sb.toString());
        }catch(FileNotFoundException e){
            IO.println("文件为查找到");
        }catch(IOException ie){
            ie.printStackTrace();
        }finally{
            try {
                fr.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
