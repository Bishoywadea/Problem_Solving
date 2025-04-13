-- Write your PostgreSQL query statement below
SELECT tweet_id 
FROM Tweets 
WHERE length(content) > 15;