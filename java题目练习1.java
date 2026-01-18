// 请补充完整Person类，要求：
// 1. 姓名不能为空或null
// 2. 年龄必须在0-150之间
// 3. 性别只能是"男"或"女"
// 4. 提供合理的构造方法和getter/setter

public class Person {
    // 你的代码 here
        private String name;
        private int age;
        private String Gender;
        public Person(){//可以用来设定初始值
            this.name = "";
            this.age = 0;
            this.Gender = "";
        }
        public Person(String name,int age,String Gender){
            setName(name);
            setAge(age);
            setGender(Gender);
        }
        public void setName(String name){
            if(name!=null&&!name.trim().isEmpty()){
                this.name=name;
            }else{
                IO.println("名字不能为空");
            }
        }
        public void setAge(int age){
            if(age>=0&&age<=150){
                this.age=age;
            }
        }
        public void setGender(String Gender){
            if("男".equals(Gender)||"女".equals(Gender)){
                this.Gender=Gender;
            }else{
                IO.println("设置失败");
            }
        }
        public String getName(){
            return this.name;
        }
        public int getAge(){
            return this.age;
        }
        public String getGender(){
            return this.Gender;
        }
    // 测试代码
    public static void main(String[] args) {
        Person p = new Person("张三", 25, "男");
        p.setAge(200);  // 应该设置失败
        p.setGender("未知");  // 应该设置失败
        System.out.println(p.getName() + " " + p.getAge() + "岁 " + p.getGender());
    }
}

package Fengzlianxi;// 设计一个Book类，要求：
// 1. 属性：书号(id)、书名(name)、作者(author)、价格(price)、库存(stock)
// 2. 书号一旦设置不能修改
// 3. 价格必须大于0
// 4. 库存不能为负数
// 5. 提供借书(borrow)和还书(returnBook)方法
// 6. 借书时库存减少，还书时库存增加

public class Book {
    // 你的代码 here
        static String id;
        String name;
        String author;
        double price;
        int stock;
        public Book(){

        }
        public Book(String id,String name,String auehor,double price,int stock){
            this.id=id;
            this.name=name;
            this.author=auehor;
            if(price>0){
                this.price=price;
            }if(stock>=0){
                this.stock=stock;
            }
        }
        public void borrow(int stock){
            if(stock<=this.stock){
                this.stock-=stock;
                IO.println("借出成功，库存还有 "+this.stock+" 本书");
            }else{
                IO.println("借书失败,库存不足");
            }
        }
        public void returnBook(int stock){
            this.stock+=stock;
        }
        public String getId() {
            return id;
        }
        public void setId(String id) {
            this.id = id;
        }
        public String getName() {
            return name;
        }
        public void setName(String name) {
            this.name = name;
        }
        public String getAuthor() {
            return author;
        }
        public void setAuthor(String author) {
            this.author = author;
        }
        public double getPrice() {
            return price;
        }
        public void setPrice(double price) {
            this.price = price;
        }
        public int getStock() {
            return stock;
        }
        public void setStock(int stock) {
            this.stock = stock;
        }

    // 测试代码
    public static void main(String[] args) {
        Book book = new Book("B001", "Java编程思想", "Bruce Eckel", 89.9, 5);
        book.borrow(3);  // 借出3本
        book.borrow(5);  // 应该失败，库存不足
        book.returnBook(2);  // 归还2本
        System.out.println("当前库存：" + book.getStock());
    }
}
