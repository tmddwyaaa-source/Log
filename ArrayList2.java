package Jihekuangjia2;

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

package Jihekuangjia2;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List list =new ArrayList();
        Book b1 = new Book("月亮与六便士",20,"毛姆");
        Book b2=new Book("红毛狮王去流浪",20,"沈石溪");
        list.add(b1);
        list.add(b2);
        Book b3=new Book("悟空传",30,"今何在");
        list.add(1,b3);

        list.remove(b1);
        list.remove(0);
        //删除指定的元素，可以是下标(数字默认是小标),还有具体元素
        //删除后其中的小标会时时变动
        if(list.contains(b2)){
            //contains()是判断集合里存不存在这个元素的
            IO.println("b2存在集合里");
        }
        for(int i=0;i<list.size();i++){
            Book g=(Book)list.get(i);
            IO.println(g);
        }
    }
}
