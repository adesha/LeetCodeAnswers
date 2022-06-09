# Write your MySQL query statement below
select score,dense_rank() OVER(ORDER BY score DESC) as "rank"
from Scores