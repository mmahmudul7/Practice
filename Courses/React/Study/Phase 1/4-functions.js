// Normal Function
// Sum of two numbers
function sum(a, b) {
  return a + b;
}

console.log(sum(5, 10)); // 15

// Function with No Return
function greet(name) {
  console.log("Hello " + name + "!");
}

greet("Hasan"); // Hello Hasan!

// Arrow Function
// Multiply two numbers
const multiply = (x, y) => x * y;

console.log(multiply(3, 4)); // 12

// Function + forEach;
let numbers = [1, 2, 3, 4, 5];

numbers.forEach((num) => {
  console.log(num * 2);
});
