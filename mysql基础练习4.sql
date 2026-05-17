create database test4 default character set utf8;
use test4;
create table kc(id_kc int primary key auto_increment,
				name_kc varchar(20) not null,
                qualification varchar(14));
insert into kc value(10,"老大","211");
insert into kc value(default,"老二","211");
insert into kc value(default,"张三","985");
insert into kc value(default,'李四','大专');
insert into kc value(default,'王五','一本');
insert into kc value(default,'六七','二本');

select * from kc;
#搜寻指定目标 基础格式 SELECT * FROM 表名
#真格式： SELECT *(*代表搜寻全部列) {各种类型数据条件} FROM(确定 表) 表名
select name_kc from kc; #	*可以不写

desc kc;#查看表结构信息 DESC 表名


use fbl;
select * from bydengji;
insert into bydengji value(default,'老大',29,'男');
insert into bydengji value(default,'氨基钠',22,'女');
insert into bydengji value(default,'才女',20,'女');
insert into bydengji value(default,'李四',25,'男');
insert into wuqik value(1,'埃里克就','12',1000);
insert into bydengji value(default,'!!空空?!!',30,null);
insert into wuqik value(default,'knc','12wuqik',1000);
insert into wuqik value(default,'艾什莉','12',null);
insert into wuqik value(default,'ксения','12',1000);
select * from wuqik;
alter table wuqik change column chiyour_id year_ren int;
insert into bydengji value(default,'xlkm',20,'女');
insert into bydengji value(default,'mlken女',20,'女');
insert into bydengji value(default,'kj女',20,'女');







select name_sb,nianl_sb,nianl_sb+10 from bydengji;
#可以在条件地方使用算术运算符,不会导致数据库数据变化;
select name_wq,jige_wq,jige_wq*10 from wuqik;
#null为空,不是0也不是空格,不参与运算,始终为空=null
select name_wq as name from wuqik;	#列别名 ……列名+as 新列名，搜寻时会改显示出来的列名
select wq.name_wq name from wuqik wq; #表别名 ……from 表名 新表名,短暂改名,可以通过wq.来看列名 
select distinct * from bydengji; 
#distinct归类重复 但是只能减少一行完全一致的 有部分差异的不会减少
#SELECT DISTINCT 列名 FROM 表名;
select name_sb name from bydengji where sex='女';
#查询限定目标 where 条件;   条件类似 C,JAVA真假 如1=1是真 效果为搜寻所有
select name_sb,nianl_sb year,sex from bydengji where nianl_sb>=22; 
#限制条件可使用符号 在where后面 
select name_sb,nianl_sb from bydengji where nianl_sb between 20 and 30;
#bettwn … and   where条件关键字 在什么什么之间  BETWEEN 下限 ADD 上限;
select name_sb,nianl_sb from bydengji where nianl_sb in (20,22,26);
#in where条件关键字 满足一个括号中的一个条件即可 IN(条件1，条件2) 多条件
select id_sb,name_sb from bydengji where name_sb like '_!%'; #最后字符意思是第二位是感叹号的目标
#like where条件词 专门来查看字符的 _是占位符指单个字符 %指0或多字符 LIKE '_X%' 
select name_sb,sex from bydengji where sex is null;
#is null-> 查看是否为空 is not null->是否非空
select name_sb,nianl_sb,sex from bydengji where sex='男'and nianl_sb<=20;#and=&& 
select name_sb,nianl_sb,sex from bydengji where sex='男'or nianl_sb<=20;#or=||
select name_sb,nianl_sb,sex from bydengji where not nianl_sb<=20;#not=!	以上3个是sql逻辑运算符

select name_sb,nianl_sb year from bydengji order by year asc;
select name_sb,nianl_sb year from bydengji order by year desc; #可使用列别名排序,例如year
#order by 设定列排序 默认升序——asc 可省略不写 降序——desc 
select id_sb,nianl_sb year from bydengji order by year asc,id_sb desc;
#order by支持多语句，可以这个升序另一个降序，但是更基于前面的语句，比如升序更多降序更少
select name_sb from bydengji order by nianl_sb asc,id_sb desc;
#order by 不需要后面的列也可以按照要求排序,只是你可能看不到,对了列别名不行,它要显示列本名






#练习
select name_sb,gongz from sb where gongz>=12000;
select name,bum from sb where id;
select name,gongz from sb where gongz<5000 and gongz>12000;
select name employee,gongz 'Monthly Salary' from sb where 'monthly salary' between 5000 and 12000 and
bumeng in(20,50);
select name_,gz_address where zug is null;
select name,gongz,yongj from yongb where yongj is not null  order by gongz desc,yongj desc;
#order by 前不用接and连接
select name from sb where name like '%a%' and name like '%e%';
select name,gz_adress,gongz from sb where gz_adress in(SA_REP,ST_CLERK) and gongz not in(2500,3500,7000);