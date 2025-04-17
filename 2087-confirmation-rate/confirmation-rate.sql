-- Write your PostgreSQL query statement below
SELECT s.user_id, ROUND((SUM(
        CASE WHEN c.action = 'confirmed' THEN 1.0
        ELSE 0.0
        END)/ COUNT(*))::numeric,2) as confirmation_rate
FROM Signups as s LEFT JOIN Confirmations as c
ON s.user_id = c.user_id
GROUP BY s.user_id;