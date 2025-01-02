// The find() method of Array instances 
// returns the first element in the provided array
// that satisfies the provided testing function. 
// If no values satisfy the testing function, undefined is returned.

/*
Syntax:
array.find(callback(element, index, array), thisArg)
*/

// Find a number 
const numbers = [10, 20, 30, 40, 50];

const result = numbers.find((num) => num > 30);

console.log(result);
console.log();

// Find from object 
const users = [
    { id: 1, name: "Hasan" },
    { id: 2, name: "Mahmud" },
    { id: 3, name: "Ibrahim" },
];

const user = users.find((u) => u.name === "Mahmud");

console.log(user);
console.log();

// If no values satisfy the testing function, undefined is returned.
const nums = [10, 20, 30, 40, 50];

const search = nums.find((srch) => srch > 100);

console.log(search);
console.log();


// find() vs filter()

const numerics = [10, 20, 30, 40, 50];

// find
console.log(numerics.find((num) => num > 20)); // Output: 30

// filter
console.log(numerics.filter((num) => num > 20)); // Output: [30, 40, 50]
