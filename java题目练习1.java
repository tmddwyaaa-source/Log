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