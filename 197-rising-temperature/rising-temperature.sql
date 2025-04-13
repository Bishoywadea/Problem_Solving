-- Write your PostgreSQL query statement below
SELECT w1.id 
FROM Weather as w1 JOIN Weather as w2
ON Date(w1.recordDate)-1 = Date(w2.recordDate) 
WHERE w1.temperature > w2.temperature ;