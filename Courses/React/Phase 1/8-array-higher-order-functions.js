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
