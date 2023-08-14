# # Write your MySQL query statement below
# select * from Cinema where description !='boring' and id %2 = 1 order by id desc; 
select id, movie, description, rating 
from Cinema where mod(id,2)=1 and description != 'boring' 
order by rating desc