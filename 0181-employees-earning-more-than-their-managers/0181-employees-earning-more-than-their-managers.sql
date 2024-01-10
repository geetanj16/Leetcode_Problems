# Write your MySQL query statement below
select name as EMPLOYEE from Employee e where salary > (select salary from Employee where id = e.managerId);