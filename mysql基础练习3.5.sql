create database fbl default character set utf8; 
use fbl;
alter table huizhang add column lianxi2 int default 0;
#添加新列并修改默认值		#ALTER TABLE 表名 ADD COLUMN 列名 类型名 DEFAULT 默认值;
insert into huizhang value(default,'王五','十点',default); #测试默认值
insert into bydengji value(default,"老六",27,'男');

update bydengji set nianl_sb=16 where id_sb=2344; 
#更新数据 UNDATA 表名 SET 列名 = 数据 WHERE 条件
# 注：where 是限制更新条件的否则会导致所有数据被修改

delete from bydengji where id_sb=2342;
#删除指定数据,where是条件,诺无条件 则该表所有数据清空。逐条性清理数据,会记录(有日志),效率较低
#DELETE FROM 表名 WHERE 条件;   注：修改非主键或索引位会有安全模式阻止删除

truncate table huizhang;
#清空表数据 TRUNCATE TABLE 表名;
#整体性清空表数据,不记录，无日志,效率较高

select * from kc;
#搜寻指定目标 基础格式 SELECT * FROM 表名
#真格式： SELECT *(*代表搜寻全部列) {各种类型数据条件} FROM(确定 表) 表名
select name_kc from kc; #	*可以不写

desc kc;#查看表结构信息 DESC 表名
