# Write your MySQL query statement below
select name,sum(amount)as balance
from Users u,Transactions t
where u.account=t.account
group by u.account
having sum(amount)>10000