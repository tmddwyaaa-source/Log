package Xml;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.*;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import java.io.IOException;

public class Csxml {
    public static void main(String[] args) {
        xieru();
        duqu();
}

    public static void xieru() {
        DocumentBuilderFactory dr=DocumentBuilderFactory.newInstance();
        try {
            DocumentBuilder db=dr.newDocumentBuilder();//文本解析工具
            Document rqi=db.parse("D:\\Jave\\java\\jave_test\\src\\Xml\\books.xml");
            Element book=rqi.createElement("book");//创造book节点
            book.setAttribute("id","b3");//放入节点信息
            Element name=rqi.createElement("name");
            name.setTextContent("云边有个小卖部");//填入节点信息
            Element price=rqi.createElement("price");
            price.setTextContent("20");
            book.appendChild(name);
            book.appendChild(price);
            //将两个节点放到大节点book里面,绑定关系
            rqi.getElementsByTagName("book").item(0).
                    appendChild(book);
            TransformerFactory tf=TransformerFactory.newInstance();
            Transformer tr=tf.newTransformer();
            //将操作落实到硬盘文件上
            Source source=new DOMSource(rqi);
            Result result=new StreamResult("D:\\Jave\\java\\jave_test\\src\\Xml\\books.xml");
            tr.transform(source,result);
            IO.println("添加成功");
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (SAXException e) {
            e.printStackTrace();
        } catch (TransformerConfigurationException e) {
            e.printStackTrace();
        } catch (TransformerException e) {
            e.printStackTrace();
        }
    }

    public static void duqu() {
        DocumentBuilderFactory dr= DocumentBuilderFactory.newInstance();
        //创造文档解析工厂,为了后面创建文档解析工具做准备
        try {
            DocumentBuilder db=dr.newDocumentBuilder();
            //创建出了文档解析器,通过这个对象使用方法
            Document rqi=db.parse("D:\\Jave\\java\\jave_test\\src\\Xml\\books.xml");
            //让文档解析器解析该路径的文档
            NodeList jih=rqi.getElementsByTagName("book");
            //获取所有book节点的集合
            for(int i=0;i<jih.getLength();i++){
                //相当于泛型集合<book>的长度,以它为条件
                Element book=(Element)jih.item(i);
                //item是子类的方法,父类无法使用,所以强转成子类
                String id=book.getAttribute("id");
                String name=book.getElementsByTagName("name").
                        item(0).getFirstChild().getNodeValue();
                String price=book.getElementsByTagName("price").
                        item(0).getFirstChild().getNodeValue();
                IO.println(id+"\t"+name+"\t"+price);
            }
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (SAXException e) {
            throw new RuntimeException(e);
        }
    }
    }

