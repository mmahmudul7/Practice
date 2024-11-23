-- Often times, we want to combine two tables, but one of the tables is the result of another calculation.

-- The WITH statement allows us to perform a separate query

-- Do not include ; inside of the () of your WITH statement.

WITH previous_query AS (
   SELECT customer_id,
      COUNT(subscription_id) AS 'subscriptions'
   FROM orders
   GROUP BY customer_id
)
SELECT customers.customer_name, 
   previous_query.subscriptions
FROM previous_query
JOIN customers
  ON previous_query.customer_id = customers.customer_id;