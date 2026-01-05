package lianxi2;

public class Main {
    public static void main(String[] args) {
        Zgr zgr = new Zgr();
        Mgr mgr = new Mgr();
        Hgr hgr = new Hgr();
        People[] ppl = new People[3];
        ppl[0] = zgr;
        ppl[1]=mgr;
        ppl[2]=hgr;
        for(People p:ppl){
            p.nihao();
        }
    }
}

package lianxi2;

public abstract class People {
    public abstract void nihao();
}

package lianxi2;

public class Mgr extends People {
    @Override
    public void nihao() {
            IO.println("Hello");
    }
}

package lianxi2;

public class Hgr extends People {
    @Override
    public void nihao() {
        IO.println("韩语里面的你好");
    }
}

package lianxi2;

public class Zgr extends People {
    @Override
    public void nihao() {
        IO.println("你好");
    }
}
