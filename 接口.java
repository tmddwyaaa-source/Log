package Jieko2;

public class Main {
    public static void main(String[] args) {
        Fish[] fish={new Dafish("大鱼"),new Xiaofish("小鱼")};
        for(Fish f:fish){
            f.eat();
            f.swim();
            if(f instanceof Dafish){
                Dafish df=(Dafish)f;
                df.power();
            }
            f.fish();
            IO.println("--------------------");
        }
    }
}

package Jieko2;

public interface Eat {
    public void eat();
}

package Jieko2;

public interface Swim {
    public void swim();
}

package Jieko2;

public interface Power {
    public void power();
}

package Jieko2;

public abstract class Fish implements Eat,Swim{
    String name;

    public abstract void fish();
}

package Jieko2;

public class Dafish extends Fish implements Eat,Swim,Power{
    public Dafish() {

    }
    public Dafish(String name) {
        this.name=name;
    }
    @Override
    public void fish() {
        IO.println("name是"+this.name);
    }
    @Override
    public void eat() {
        IO.println("大鱼吃小鱼");
    }
    @Override
    public void swim() {
        IO.println("游的飞快");
    }
    @Override
    public void power(){
        IO.println("我的力量无人能及！！！");
    }
}

package Jieko2;

public class Xiaofish extends Fish implements Eat,Swim {
    public Xiaofish() {

    }
    public Xiaofish(String name) {
        this.name = name;
    }
    @Override
    public void fish() {
        IO.println("name是"+this.name);
    }
    @Override
    public void eat() {
        IO.println("小鱼吃渣子");
    }
    @Override
    public void swim() {
        IO.println("游的不快");
    }
}
