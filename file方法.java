package File;

import java.io.File;
//import java.io.IOException;

public class Main {
    public static void main(String[] args)  {
        File file = new File("C:\\Users\\tmddw\\Desktop\\big.txt");
        File file2 = new File("C:\\Users\\tmddw\\Desktop\\123.txt");

//        boolean bl=file.delete();//删除文件,直接删除,不走回收站
//        if(bl){
//            IO.println("删除成功");
//        }

        if(file.exists()){
            //判断文件存不存在
            IO.println("文件存在");
            if(file.isFile()){
                //判断是不是文件
                IO.println("的确是文件");
                IO.println("相对路径:"+file.getPath());//相对路径
                IO.println("绝对路径:"+file.getAbsolutePath());//绝对路径
                IO.println("文件名称:"+file.getName());//文件名称
                IO.println("文件大小:"+file.length()+"字节");//文件大小
            }else if(file.isDirectory()){
                //判断是不是目录
                IO.println("是目录而非文件");
            }else{
                IO.println("并非并非");
            }

        }else{
            IO.println("文件不存在");
        }
        if(!file2.exists()){
            try{
                boolean fl=file2.createNewFile();
                if(fl){
                    IO.println("文件创造成功力");
                }
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }
}
