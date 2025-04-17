-- Write your PostgreSQL query statement below
SELECT p.product_id, COALESCE(ROUND(SUM(price * units)::numeric / NULLIF(SUM(units), 0), 2),0) AS average_price
FROM Prices as p LEFT JOIN UnitsSold as u
ON u.product_id = p.product_id AND u.purchase_date >= start_date AND u.purchase_date <= end_date
GROUP BY p.product_id;