// this is single line comment 

/*
This is multi
Line comment
*/

var num = "12.50";
console.log(typeof num);

var num1 = parseInt(num)
var num2 = parseFloat(num)

var sum = num1 + num2

console.log(sum)

console.log(parseInt("101", 2)); // In Binary calculation

console.log(parseInt("Hello"));    // Output: NaN
console.log(parseFloat("Hello")); // Output: NaN