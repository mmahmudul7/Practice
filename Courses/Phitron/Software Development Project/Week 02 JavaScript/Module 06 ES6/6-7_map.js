const numbers = [1, 2, 3, 4, 5];

const doubled = numbers.map((num) => num * 2);

console.log(doubled);
console.log();

// Extract a specific property from Object 

const users = [
    { id: 1, name: "Hasan", age: 25 },
    { id: 2, name: "Shamim", age: 30 },
    { id: 3, name: "Rafiq", age: 20 },
];
  

const names = users.map((user) => user.name);
console.log(names); // Output: ["Hasan", "Shamim", "Rafiq"]
console.log();

// Using index 
const numeric = [10, 20, 30, 40, 50];

const withIndex = numeric.map((num, index) => `${index}: ${num}`);

console.log(withIndex);
console.log();

// Multi-level Array manipulation 
const nestedArray = [[1, 2], [3, 4], [5, 6]];

const firstElements = nestedArray.map((arr) => arr[0]);

console.log(firstElements);
console.log();

// map() vs forEach() 
const digits = [1, 2, 3, 4, 5];

// map() 
const squared = digits.map((num) => num * num);
console.log(squared);

// forEach() 
digits.forEach((num) => console.log(num * num));