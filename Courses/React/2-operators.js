// Arithmetic Operators: + - * / %
let a = 10,
  b = 3;
console.log(a + b); // 13
console.log(a - b); // 7
console.log(a * b); // 30
console.log(a / b); // 3.3333
console.log(a % b); // 1 (modulus)

// Assignment Operators: =, +=, -=, *=, /=
let x = 5;
x += 3; // x = x + 3 → 8
x *= 2; // x = x * 2 → 16

// Comparison Operators: ==, ===, !=, !==, >, <, >=, <=
console.log(5 == "5"); // true (value check)
console.log(5 === "5"); // false (value + type check)
console.log(5 > 3); // true

// Logical Operators: &&, ||, !
let isAdult = true;
let hasID = false;
console.log(isAdult && hasID); // false
console.log(isAdult || hasID); // true
console.log(!isAdult); // false
