/*4. In MySQL, Update and Delete query wasn’t executing, what was the
reason and how to run those query? Write the code to enable the
feature. (If you followed the class, you should know this). */

-- Answer: 
/*
For database security purposes in MySQL, Update and Delete query
wasn’t executing.
To run those query we must disable security first, After running the
query we should enable database security again.
*/

– Enable to run Updata and Delete query
SET SQL_SAFE_UPDATES = 0;

– Disable to run Updata and Delete query
SET SQL_SAFE_UPDATES = 1;

-- Example:

SET SQL_SAFE_UPDATES = 0;

UPDATE student
SET Name = 'MD Mahmudul Hasan'
WHERE Roll = 1;

SET SQL_SAFE_UPDATES = 1;