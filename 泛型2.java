package Fengxing2;

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

package Fengxing2;

import Fangxing.Book;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        //Map
        Map<String, Book> map=new HashMap<String,Book>();
        Book b1=new Book("平凡的世界",40,"路遥");
        Book b2=new Book("月亮与六便士",20,"毛姆");
        Book b3=new Book("基督山伯爵",20,"why");
        map.put(b1.getName(),b1);
        map.put(b2.getName(),b2);
        map.put(b3.getName(),b3);
        Set<String> keys=map.keySet();
        for(String k:keys){
            Book value=map.get(k);
            IO.println(k+" "+value.getAuthor());
        }//方法1

        IO.println("--------------------------------------------------------");
        Collection<Book> values=map.values();
        for(Book  v:values){
            IO.println(v.getName()+" "+v.getAuthor());
        }//方法2

    }
}
