// Normal Function
function sum(a, b) {
  return a + b;
}
console.log(sum(5, 3)); // 8

// Function Expression
const multiply = function (x, y) {
  return x * y;
};
console.log(multiply(4, 5));

// Arrow Function (ES6)
const divide = (a, b) => a / b;
console.log(divide(10, 2));

const greetPerson = (name) => `Hello ${name}`;
console.log(greetPerson("Hasan")); // Hello Hasan

// Default Parameters
function greet(name = "Guest") {
  return `Welcome, ${name}`;
}

console.log(greet()); // Welcome, Guest
console.log(greet("Hasan")); // Welcome, Hasan

// ====================
// 1. Sum function
function sumNumbers(a, b) {
  return a + b;
}
console.log(sumNumbers(5, 3)); // 8

// 2. isEven function with proper if/else
function isEven(number) {
  if (number % 2 === 0) {
    return true;
  } else {
    return false;
  }
}
console.log(isEven(4)); // true
console.log(isEven(5)); // false

// 3. Optional: short form using ternary
const isEvenTernary = (number) => (number % 2 === 0 ? true : false);
console.log(isEvenTernary(6)); // true
console.log(isEvenTernary(7)); // false
