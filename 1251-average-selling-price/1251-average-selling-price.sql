# Write your MySQL query statement below
SELECT p.product_id, round(SUM(p.price*u.units)/sum(u.units),2) as average_price
FROM Prices p 
INNER JOIN UnitsSold u
ON p.product_id = u.product_id AND 
u.purchase_date BETWEEN p.Start_date and p.end_date
GROUP BY p.product_id