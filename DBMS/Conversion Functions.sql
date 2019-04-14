create table birth
(
name varchar2(20),
dob date
);
insert into Birth values (NULL,to_date('6-Jan-1999','dd-mm-yyyy'));
select * from birth;
select name,to_char(dob,'dd')birthmonth
where to_char(dob,'q')='z'
from birth;
select name,NVL(name,'NO name provided'),dob
from birth;
select name,nvl2(name,'Good Name','NO name provided')Name_Remarks,dob
from birth;
create table contact
(
nam character(10),
cell numeric(10),
bus  numeric(10),
hom  numeric(10)
);
insert into contact values ('Anzan',69,NULL,77);
select * from contact;