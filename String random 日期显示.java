package String;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        String name1="kaka";
        String name2="kaka";
        String name3="haha gugu hah";
        String name4="KAKA";
        //length
        int n=name1.length();
        IO.println(n);
        IO.println("--------------------------------");
        //equals
        if(name1.equals(name2)){
            IO.println("一样");
        }
        IO.println("--------------------------------");
        //equalsIgnoreCase无视大小写判断字符串是否一致
        if(name1.equalsIgnoreCase(name4)){
            IO.println("正确滴");
        }
        IO.println("--------------------------------");
        //toLowerCase转小写
        String daname4=name4.toLowerCase();
        IO.println("小写："+daname4);
        IO.println("--------------------------------");
        //toUpperCase转大写
        String xiaoname2=name2.toUpperCase();
        IO.println("大写："+xiaoname2);
        IO.println("--------------------------------");
        //concat连接字符串
        String name=name1.concat(name2);
        IO.println(name.concat(name4));
        IO.println("--------------------------------");
        //indexOf在大字符串里搜寻第一次出现的小字符串
        //找到返回小字符串首元素下标，否则返回-1
            IO.println(name3.indexOf("f"));
            IO.println(name3.indexOf("ha"));
        IO.println("--------------------------------");
        //lastindexOFf大字符串搜寻最后一次出现的小字符串
        //找到返回小字符串首元素下标,否则返回-1
        IO.println(name3.lastIndexOf("hei"));
        IO.println(name3.lastIndexOf("ha"));
        IO.println("--------------------------------");
        //substring(int 参数1)提取从下标int参数开始到字符串结束的字符串部分
        IO.println(name3.substring(4));
        IO.println(name3.substring(8));
        IO.println(name3.substring(0));
        IO.println("--------------------------------");
        //substring(int 参数1,int 参数2)提取参数1为下标到参数2为下标之间的字符串
        //值得注意的是参数2是把下标0当成下标1开始算的
        IO.println(name3.substring(0,4));
        IO.println(name3.substring(0,8));
        IO.println(name3.substring(0,0));
        IO.println("--------------------------------");
        //trim返回一个开头和结尾没有空格的字符串副本
        String name5="  smskl xq  ";
        IO.println(name3.trim());
        IO.println(name5.trim());
        IO.println("--------------------------------");
        //replace(char c1,char c2)把字符串中字符c1替换成字符c2
        IO.println(name3.replace('h','x'));
        IO.println("--------------------------------");
        //replace(c1,c2)参数类型是字符串,把字符串里面的字符串c1替换成字符串c2
        IO.println(name3.replace("ha","jgbjgb"));
        IO.println("--------------------------------");
        //split(string c)将字符串通过参数c分割成很多个小字符串，放到一起作为字符串数组返回
        String next="isc:md:yuhua:ff";
        String[] num=next.split(":");
        for(String s:num){
            IO.println(s);
        }
        IO.println("--------------------------------");
        //stringBuffer连接字符串,由于传统string类的方法concat效率不够
        //concat是返回一个副本,不修改原参数
        //stringBuffer也是个类
        StringBuffer sb=new StringBuffer();
        sb.append("你好");
        sb.append("世界");
        sb.insert(2,"我的");//插入方法,两个参数
        String str=sb.toString();
        IO.println(str);
        IO.println("--------------------------------");
        //random
        //如果random有种子数(seed),那就会变成一个随机固定值
        //如果两个random的种子数一样，那他们的数值也一样
        Random rd1=new Random(50);
        Random rd2=new Random();
        int r1=rd1.nextInt(100);
        int r2=rd2.nextInt(100);
        IO.println(r1);
        IO.println(r2);
        IO.println("--------------------------------");
        //时间日期显示
        Date da=new Date();
        //导入Date的文件选择的是第一个
        SimpleDateFormat sdf=new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        //日期的格式化器SimpleDateFormat
        sdf.format(da);
        IO.println(da);
        //外国日期形式
        String sd=sdf.format(da);
        IO.println(sd);
        //无单词版
    }
}
