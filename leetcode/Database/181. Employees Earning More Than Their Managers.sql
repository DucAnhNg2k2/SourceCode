# Write your MySQL query statement below
SELECT e.name as 'Employee' 
FROM Employee e
WHERE e.salary > (SELECT manager.salary FROM Employee manager WHERE manager.id = e.managerId)