create database stdent2 default character set utf8; 
create database student3 default character set utf8;

use student3;

create table shengf(id int,id_name varchar(10),sex char,fenshu float(4,1));
create table jiat(fuq_name varchar(10),muq_name varchar(10),jiatingxiangxi text);
create table zhangsan(lisi varchar(10),wangwu varchar(10));
drop table shengf;
show tables;
alter table zhangsan rename wulai;
alter table shengf change column fenshu point float(5.2);
alter table shengf modify point int;
alter table shengf add column nianling int; 

alter table wulai drop column lisi;
#删除列 ALTER TABLE 表名 DROP COLUMN 列名
alter table shengf add primary key(id);
#添加主键	ALTER TABLE 表名 ADD PRIMARY KEY（列名）
alter table shengf modify id int auto_increment;
#修改主键为自增	ALTER TABLE 表名 INT AUTO_INCREMENT;
alter table shengf modify id int;
#去除主键自增能力	ALTER TABLE 表名 MODIFY 列名 类型；
alter table shengf drop primary key;
#删除主键	ALTER RABLE 列名 DROP PRIMARY KEY;
#主键有自增必须先删除自增才能删除主键
create table kaos(id_kaos int,name_kaos varchar(10),nl_kaos int);
#创建接下来要外键约束的表中的列
alter table kaos add constraint kaos_fk foreign key(id_kaos) references shengf(id);
#外键约束列，将两个列关联起来 ALTER TABLE 要外键约束的表名 ADD CONSTRAINT 约束名 FORIGN KEY（约束的列名）REFERENCES 关联的主键表（关联的主键列）
















