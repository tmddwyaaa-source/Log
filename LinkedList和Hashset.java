package Jihekuangja3;

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
}

package Jihekuangja3;

import Jihekuangjia2.Book;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        List list=new LinkedList();
        Jihekuangjia2.Book b1 = new Jihekuangjia2.Book("月亮与六便士",20,"毛姆");
        Jihekuangjia2.Book b2=new Jihekuangjia2.Book("红毛狮王去流浪",20,"沈石溪");
        list.add(b1);
        list.addFirst(b2);
        Jihekuangjia2.Book b3=new Jihekuangjia2.Book("悟空传",30,"今何在");
        list.addLast(b3);

        Book first=(Book)list.getFirst();
        IO.println(first);
        Book last=(Book)list.getLast();
        IO.println(last);
        IO.println("---------------------------------------");

        for(int i=0;i<list.size();i++){
            Jihekuangjia2.Book g=(Book)list.get(i);
            IO.println(g);
        }

        IO.println("---------------------------------------");
        list.removeFirst();
        //删除第一个元素
        list.removeLast();
        //删除最后一个元素
        for(int i=0;i<list.size();i++){
            Jihekuangjia2.Book g=(Book)list.get(i);
            IO.println(g);
        }

        IO.println("--------------------------------------");
        //set
        Set set=new HashSet();
        Book b4=new Book("龙族",30,"江南");
        Book b5=b4;
        set.add(b4);
        set.add(b5);
        IO.println(set.size());
        //set具有唯一性，只能有一个样式的地址，就算两个地址一样，也只有一个元素存放进去
    }
}
