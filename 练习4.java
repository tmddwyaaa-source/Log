package lianxi2;

public class Main {
    public static void main(String[] args) {
        Dog dog=new Dog("小黑",100);
        Cat cat=new Cat("小白",100);
        Zhur zhur=new Zhur();
        for(int i=0;i<2;i++)
        {
            zhur.feed(dog,30);
            zhur.feed(cat,30);
        }
    }
}

package lianxi2;

public abstract class Pet {
    String name;
    int power;
    //int sum;
    public abstract void eat(int sum);
}

package lianxi2;

public class Dog extends Pet {
    public Dog()
    {

    }
    public Dog(String name,int power)
    {
        super.name=name;
        super.power=power;
    }
    @Override
    public void eat(int sum)
    {
        power+=sum;
        IO.println("投喂"+name+",获得能量"+sum+",总能量为"+power);
    }
}

package lianxi2;

public class Cat extends Pet{
    public Cat()
    {

    }
    public Cat(String name,int power)
    {
        super.name=name;
        super.power=power;
    }
    @Override
    public void eat(int sum)
    {
        power+=sum;
        IO.println("投喂"+name+",获得能量"+sum+",总能量为"+power);
    }
}

package lianxi2;

public class Zhur {
    public void feed(Dog dog,int sum){
        dog.eat(sum);
    }
    public void feed(Cat cat,int sum){
        cat.eat(sum);
    }
}
