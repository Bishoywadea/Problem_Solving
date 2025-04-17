-- Write your PostgreSQL query statement below
SELECT query_name, ROUND(SUM(rating*1.0/position)*1.0/COUNT(*),2) AS quality,
       ROUND(SUM(
        CASE WHEN rating>=3 THEN 0.0
        ELSE 1.0
        END
       )/COUNT(*)*100.0,2) AS poor_query_percentage
FROM Queries
GROUP BY query_name;