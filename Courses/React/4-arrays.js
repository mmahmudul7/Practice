// 1. Array Creation
let fruits = ["Apple", "Banana", "Orange"];
console.log(fruits);

// 2. Access Items
console.log(fruits[0]);
console.log(fruits[2]);

// 3. Change/Update Items
fruits[1] = "Mango"; // Banana → Mango
console.log(fruits);

// 4. Array Length
console.log(fruits.length);

// 5. Add/Remove Items
fruits.push("Pineapple"); // Add at end
fruits.pop(); // Remove last
fruits.unshift("Strawberry"); // Add at start
fruits.shift(); // Remove first
console.log(fruits);

//==========
let arr = [3, 4, 5];
// [3, 4, 5]

console.log(arr[0], arr[arr.length - 1]);
// 3 (first) 5 (last)

arr[1] = 10;
console.log(arr);
// [3, 10, 5]  (update second element)

arr.push(6); // [3, 10, 5, 6]
arr.unshift(2); // [2, 3, 10, 5, 6]
console.log(arr);

arr.pop(); // [2, 3, 10, 5]
arr.shift(); // [3, 10, 5]
console.log(arr);

console.log(arr.length);
// 3

// Array with loop
let numbers = [1, 2, 3, 4, 5];

for (let i = 0; i < numbers.length; i++) {
  const num = numbers[i];
  console.log(num);
}

// ES6
console.log("ES6");
numbers.forEach((num) => console.log(num));
