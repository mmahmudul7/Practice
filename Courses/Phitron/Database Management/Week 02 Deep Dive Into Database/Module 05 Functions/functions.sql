SELECT first_name, UPPER(first_name)
FROM employees;

SELECT LOWER('HELLO'); -- ফলাফল: hello
SELECT ABS(-5); -- ফলাফল: 5

SELECT DEGREES(PI()); -- ফলাফল: 180
SELECT RADIANS(180); -- ফলাফল: 3.141593
SELECT COS(PI()/3); -- ফলাফল: 0.5
SELECT SIN(PI()/2); -- ফলাফল: 1
SELECT TAN(PI()/4); -- ফলাফল: 1
SELECT ACOS(1); -- ফলাফল: 0
SELECT ASIN(0); -- ফলাফল: 0
SELECT ATAN(1); -- ফলাফল: 0.785398

SELECT CEIL(4.2); -- ফলাফল: 5
SELECT FLOOR(4.8); -- ফলাফল: 4
SELECT 10 DIV 3; -- ফলাফল: 3

SELECT EXP(1); -- ফলাফল: 2.718282 (e এর মান)
SELECT LN(10); -- ফলাফল: 2.302585
SELECT LOG(10); -- ফলাফল: 1 (ভিত্তি 10 এর জন্য)
SELECT LOG10(100); -- ফলাফল: 2
SELECT LOG2(8); -- ফলাফল: 3

SELECT GREATEST(10, 20, 30); -- ফলাফল: 30
SELECT LEAST(10, 20, 30); -- ফলাফল: 10

SELECT MOD(10, 3); -- ফলাফল: 1
SELECT PI(); -- ফলাফল: 3.141593
SELECT POW(2, 3); -- ফলাফল: 8
SELECT RAND(); -- উদাহরণস্বরূপ ফলাফল: 0.5678
SELECT ROUND(123.456, 2); -- ফলাফল: 123.46
SELECT SQRT(16); -- ফলাফল: 4
SELECT TRUNCATE(123.456, 2); -- ফলাফল: 123.45