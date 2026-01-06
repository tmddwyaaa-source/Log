package Jieko3;

public class Main {
    public static void main(String[] args) {
        Jiqi[] jiqi={new Jibao1(),new Jibao2(),new Jibao3()};
        for(Jiqi j:jiqi){
            j.show();
            j.prin();
            IO.println("-----------------------");
        }
    }
}

package Jieko3;

public interface Dajiqi {
    public void prin();
}

package Jieko3;

public abstract class Jiqi implements Dajiqi{
    public abstract void show();
}

package Jieko3;

public class Jibao1 extends Jiqi{
    @Override
    public void prin() {
        IO.println("爪击爪击");
    }
    @Override
    public void show() {
            IO.println("我是爪机!!");
    }
}

package Jieko3;

public class Jibao2 extends Jiqi{
    @Override
    public void prin() {
        IO.println("暴雪冰球");
    }
    @Override
    public void show() {
        IO.println("我是集中冰球机!!");
    }
}

package Jieko3;

public class Jibao3 extends Jiqi{
    @Override
    public void prin() {
        IO.println("电击电击");
    }
    @Override
    public void show() {
        IO.println("我是雷霆打机!!");
    }
}