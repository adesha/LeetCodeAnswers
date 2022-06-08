# Write your MySQL query statement below
select user_id as buyer_id,
join_date,
count(o.order_id) as orders_in_2019
from Users u
LEFT JOIN Orders o ON u.user_id = o.buyer_id AND YEAR(order_date)=2019
group by user_id
