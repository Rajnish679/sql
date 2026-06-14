# Write your MySQL query statement below
select MAX(salary) as secondHighestsalary 
from Employee 
where salary < (select MAX(salary)from Employee);


