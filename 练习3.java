package Carlianxi;

public class Main {
    public static void main(String[] args) {
        Car car=new Car("大运",13,"2009");
        car.xingslcs=1234;
        IO.println(car.xingslcs+" "+car.nianfeng+" "+car.xinghao+" "+car.pingpai);
    }
}

package Carlianxi;

public class Car {
    String pingpai;
    int xinghao;
    String nianfeng;
    int xingslcs;
    public Car(String pingpai, int xinghao, String nianfeng) {
        this.pingpai = pingpai;
        this.xinghao = xinghao;
        this.nianfeng = nianfeng;
    }
    public void getxslcs(int xingslcs){
        if(xingslcs<0){
            xingslcs=0;
        }
        else {
            this.xingslcs=xingslcs;
        }
    }

}
