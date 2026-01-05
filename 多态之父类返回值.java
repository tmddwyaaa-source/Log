package Duotai;

public class Main {
    public static void main(String[] args) {
        Laor laor=new Laor();
        //String[] name=new String[3];
        String[] name={"dog","cat","pig"};
        for(String you:name){
            Animal animal=laor.pand(you);
            animal.redm();
        }
    }
}

package Duotai;

public abstract class Animal {
    public abstract void redm();
}

package Duotai;

public class Dog extends Animal {
    @Override
    public void redm() {
        IO.println("dog");
    }
}

package Duotai;

public class Cat extends Animal {
    @Override
    public void redm() {
        IO.println("cat");
    }
}

package Duotai;

public class Pig extends Animal{
    @Override
    public void redm() {
        IO.println("pig");
    }
}

package Duotai;

public class Laor {
    public Animal pand(String zim){
        Animal animal;
        if(zim.equals("dog")){
            animal=new Dog();
        }else if(zim.equals("cat")){
            animal=new Cat();
        }else{
            animal=new Pig();
        }
        return animal;
    }
}
