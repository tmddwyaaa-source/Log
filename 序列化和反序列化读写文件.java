package xuliehua;

import java.io.Serializable;

public class Book implements Serializable{
    //要想被序列化就必须实现Serializable接口
    public String name;
    public String author;
    public int price;
    public Book(){

    }
    public Book(String name,String author,int price){
        this.name=name;
        this.author=author;
        this.price=price;
    }
    public String getName(){
        return this.name;
    }
    public String getAuthor(){
        return this.author;
    }
    public int getPrice(){
        return this.price;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setAuthor(String author){
        this.author=author;
    }
    public void setPrice(int price){
        this.price=price;
    }

}

package xuliehua;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        //序列化
        List<Book> books=new ArrayList<Book>();
        //一个类要想被序列化就必须实现Serializable接口
        Book b1=new Book("平凡的世界","路遥",30);
        Book b2=new Book("狼王梦","沈石溪",30);
        books.add(b1);
        books.add(b2);
        ObjectOutputStream oos=null;//序列化工具
        FileOutputStream fos=null;
        try {
            fos=new FileOutputStream("C:\\Users\\tmddw\\Desktop\\xuliehua.txt");
            oos=new ObjectOutputStream(fos);//先获取路径,再用序列化工具转换
            oos.writeObject(books);
            IO.println("序列化成功");
        } catch (FileNotFoundException e) {
            IO.println("文件不存在");
        }catch(IOException e){
            e.printStackTrace();
        }finally{
            try {
                fos.close();
                oos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        IO.println("--------------------------------------------------");
        //反序列化
        ObjectInputStream ois=null;//反序列化器
        FileInputStream fis=null;
        try {
            fis=new FileInputStream("C:\\Users\\tmddw\\Desktop\\xuliehua.txt");
            ois=new ObjectInputStream(fis);//先用File找到路径,再用反序列化工具转化
            List<Book> bk=(List<Book>)ois.readObject();//用泛型集合写入就用泛型集合读取
            for(Book b:bk){
                IO.println(b.getName()+"\t"+b.getPrice()+"\t"+b.getAuthor());
            }
        } catch(FileNotFoundException e){
            IO.println("文件不存在");
        }catch(IOException e){
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } finally{
            try {
                fis.close();
                ois.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
