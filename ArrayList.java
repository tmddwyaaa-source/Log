package JIhekuangjia;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList list =new ArrayList();
        list.add(12);
        list.add("泥嚎");
        list.add(1);
        list.add(92);
        list.remove(1);
        //两种格式，把下标为1的元素删了
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
    }
}
