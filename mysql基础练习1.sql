create database student default character set utf8; 
#创建数据库 CREAT DATABASE 数据库名称 DEFAULT CHARACTER SET 编码类型
use student;
#使用或者说选中数据库
create table shengfen(id int,name varchar(10),salary float(8,2))
#创建表 CREATE TABLE 表名称(列名称 数据类型)
show tables;
#展示所有表 SHOW TABLES <- 要多一个s
drop table shengfen;
#删除表 DROP TABLE 表的名称
alter table shengfen rename sf;
#修改表名称 ALTER TABLE 表名称 RENAME 修改后的表名称
alter table sf change column salary gongzi float(8,2);
#修改列名称 ALTER TABLE 表名称 CHANGE COLUMN 列名称 改后的列名称 类型
alter table sf modify gongzi int;
#修改列类型 ALTER TABLE 表名称 MODIFY 列名 改后的类型名
alter table sf add column arg int;
#添加新列 ALTER TABLE 表名称 ADD COLUMN 添加的列名称 类型