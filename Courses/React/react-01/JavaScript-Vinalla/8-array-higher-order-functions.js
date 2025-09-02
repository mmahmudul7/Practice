// 1. map()
const numbers = [1, 2, 3, 4, 5];

const squares = numbers.map((num) => num * num);

console.log(squares); // [ 1, 4, 9, 16, 25 ]

// 2. filter()
const digits = [1, 2, 3, 4, 5, 6];

const evens = digits.filter((num) => num % 2 === 0);

console.log(evens); // [ 2, 4, 6 ]

// 3. reduce()
const numeric = [1, 2, 3, 4, 5];

const sum = numbers.reduce((acc, curr) => acc + curr, 0);

console.log(sum); // 15

// 4. forEach()
const fruits = ["Apple", "Banana", "Mango"];

fruits.forEach((fruit) => console.log(fruit));

// ===

const array = [10, 20, 30, 40, 50];

// map
const double = array.map((num) => num * 2);

console.log(double);

// filter
const moreThan25 = array.filter((num) => num > 25);

console.log(moreThan25);

// reduce
const add = array.reduce((acc, curr) => acc + curr, 0);

console.log(add);

// ===
const students = [
  {name: "Hasan", marks: 85},
  {name: "Mahmud", marks: 40},
  {name: "Shamim", marks: 72},
  {name: "Riyad", marks: 90},
  {name: "Tasfik", marks: 55},
];

// Finding name using map()
const names = students.map((student) => student.name);
console.log("Names:", names);

const passed = students.filter((student) => student.marks > 50);
console.log("Passed", passed);

const totalMarks = students.reduce((acc, curr) => acc + curr.marks, 0);
console.log("Total Marks", totalMarks);

const toppers = students
  .filter((student) => student.marks >= 80)
  .map((student) => student.name);
console.log("Letter Marks scorers", toppers);

// ===
const cart = [
  {product: "Laptop", price: 800, quantity: 1},
  {product: "Mouse", price: 20, quantity: 2},
  {product: "Keyboard", price: 50, quantity: 1},
  {product: "Monitor", price: 200, quantity: 2},
];

// Finding product names of this cart
const items = cart.map((item) => item.product);
console.log(items);

// price more than 100
const highPriceProducts = cart.filter((product) => product.price > 100);
console.log(highPriceProducts);

// Total cost of this cart
const totalPrice = cart.reduce(
  (acc, curr) => acc + curr.price * curr.quantity,
  0
);
console.log(totalPrice);

// Total quantity
const totalQuantity = cart.reduce((acc, curr) => acc + curr.quantity, 0);
console.log(totalQuantity);
