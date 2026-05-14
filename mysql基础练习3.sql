create database fbl default character set utf8; 
use fbl;
create table bydengji(id_sb int primary key,name_sb varchar(20),nianl_sb int,sex char);
create table wuqik(id_wq int,name_wq varchar(10),dany_wq varchar(8));
create table huiz(id_sbhuiz varchar(20),name_sbhuiz varchar(10));

alter table wuqik add column jige_wq int;
alter table huiz add column time_sbhuiz varchar(8);
alter table wuqik modify jige_wq float(8,3);
alter table huiz rename huizhang;
alter table wuqik change column dany_wq chiyour varchar(10);
alter table huizhang change column id_sbhuiz id_huizhang varchar(20);
alter table wuqik change column chiyour chiyour_id int;
					
alter table bydengji modify id_sb int auto_increment;
alter table wuqik add constraint id_wj foreign key(chiyour_id) references bydengji(id_sb); 

alter table wuqik drop foreign key id_wj;
#删除外键约束 ALTER TABLE 表名 DROP FOREGIN KEY 列名;
alter table huizhang add constraint weiyi unique(id_huizhang)
#添加唯一性约束 ALTER TABLE 表名 ADD CONSTRAINT 约束名 UNIQUE(列名);
alter table huizhang drop key weiyi;
#删除唯一性约束nianl_sb  ALTER TABLE 表名 DROP KEY 列名;
alter table bydengji modify nianl_sb int not null;
#添加非空约束	ALTER TABLE 表名 MODIFY 列名 类型名 NOT NULL;
alter table bydengji modify nianl_sb int null;
#删除非空约束	ALTER TABLE 表名 MODIFY 列名 类型名 NULL；		注：添加删除容易混淆,注意辨别
show keys from bydengji;
#展示指定表的约束 	SHOW KEYS FORM 表名；
create table lianxi(id_name varchar(10) not null,id int primary key auto_increment);
#创建表时直接创建约束。		注：外键约束需要先创建被外键约束依赖的列，创建较困难
insert into bydengji(id_sb,name_sb,nianl_sb,sex) values(2341,'张三',25,'男');
#选择插入	INSERT INTO 表名(列名,列名………) VALUES(数据……………………);
insert into bydengji values(default,"李四",26,'男');
#直接插入  	注：如果有主键位并且是自增 可以用 default null 0 来占位置
#占位后该位 主键自增会自动设定一个值不停往后，通常是前一位+1
#	INSERT INTO 表名 VALUES(数据)；
insert into bydengji values(default,"王五",26,'男');
create table newtext(one_ varchar(10) primary key auto_increment,two_ varchar(10) default 'a');
#可以通过在列后面输入default来设定默认值，默认值是根据列的类型设定的
#如果自增也会以它为基础往后