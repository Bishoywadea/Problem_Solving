-- Write your PostgreSQL query statement below
WITH total_users AS (
    SELECT COUNT(*) AS total FROM Users
)
SELECT 
    r.contest_id,
    ROUND(COUNT(*) * 100.0 / t.total, 2) AS percentage
FROM Register AS r
JOIN total_users AS t ON true
GROUP BY r.contest_id, t.total
ORDER BY percentage DESC, r.contest_id ASC;