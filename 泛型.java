package Fangxing;

public class Book {
    private String name;
    private int vaule;
    private String zuoz;
    public Book(){

    }
    public Book(String name, int vaule, String zuoz) {
        this.name = name;
        this.vaule = vaule;
        this.zuoz = zuoz;
    }
    @Override
    public String toString() {
        return "Book{" +
                "name='" + name + '\'' +
                ", vaule='" + vaule + '\'' +
                ", zuoz='" + zuoz + '\'' +
                '}';
    }

    public String getName() {
        return name;
    }

    public String getAuthor() {
        return zuoz;
    }
}

package Fangxing;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        //List
        List<Book> list=new ArrayList<Book>();
        //泛型集合,只能保存单一类型,但是免去了多类型需要强转的繁琐
        //保证了数据的安全性,代码运行效率提高,遍历更快
        Book b1 = new Book("月亮与六便士",20,"毛姆");
        Book b2=new Book("红毛狮王去流浪",20,"沈石溪");
        list.add(b1);
        list.add(b2);
        Book b3=new Book("悟空传",30,"今何在");
        list.add(0,b3);
        for(Book bk:list){
            IO.println(bk);
        }

    }
}
