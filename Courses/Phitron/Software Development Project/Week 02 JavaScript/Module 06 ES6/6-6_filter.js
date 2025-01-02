// Array Filter 

const numbers = [10, 20, 30, 40, 50];

const result = numbers.filter((num) => num > 30);

console.log(result); // Output: [40, 50]
console.log();

// Object Filter 
const users = [
    { id: 1, name: "Hasan", age: 25 },
    { id: 2, name: "Shamim", age: 30 },
    { id: 3, name: "Rafiq", age: 20 },
];
  
const adults = users.filter((user) => user.age > 25);
  
console.log(adults); 
console.log();
// Output: [{ id: 2, name: "Shamim", age: 30 }]

// Retrun empty array [] 
const numeric = [10, 20, 30];

const search = numeric.filter((num) => num > 50);

console.log(search); // Output: []