-- Write your PostgreSQL query statement below
SELECT product_name, year, price
FROM Product JOIN Sales ON Sales.product_id = Product.product_id;