package HashMap;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Map mp=new HashMap();
        mp.put("kaka","我的力量无人能及");
        mp.put("guga","gugugagagugugaga");
        mp.put("man","what can i sey");
        String value=(String)mp.get("kaka");
        IO.println(value);
        IO.println(mp.get("man"));
        //根据键，打印值(键值对)
        IO.println("----------------------------------------");
        Set set=mp.keySet();//获取所有键
        IO.println(set);//打印所有键
        IO.println("--------------------------------------");
        IO.println(mp);
        //打印所有值
        IO.println("--------------------------------------");
        IO.println(mp.size());
        //元素个数，一对键值对算一个
        IO.println("--------------------------------------");
        if(mp.containsKey("kaka")){
            //判断键存不存在
            IO.println("kaka咔咔");
        }else {
            IO.println("咔咔不！！！");
        }
        IO.println("--------------------------------------");
        //遍历Map集合,由于该集合没有下标所以要用到iterator方法
        //iterator是Set的方法
        Iterator it = set.iterator();
        //还有一件事,这代码让我们意识到创造对象并不是只有new
        //还可以用方法创造对象
        while(it.hasNext()){
            String key=(String)it.next();//键
            String vl=(String)mp.get(key);//通过键获取值
            IO.println("key:"+key+" value:"+vl);
            //打印出来的结果并不是原本放进去的顺序
            //HashMap集合是无序的
        }

    }
}
