# Write your MySQL query statement below
SELECT round(100 * sum(order_date = customer_pref_delivery_date) / count(*), 2)
AS immediate_percentage
  FROM Delivery;