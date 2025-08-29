// 1. for loop
for (let i = 1; i <= 5; i++) {
  console.log("Number:", i);
}
// Output: 1, 2, 3, 4, 5

// 2. while loop
let i = 1;
while (i <= 5) {
  console.log("While", i);
  i++;
}

// 3. do...while loop
let j = 1;
do {
  console.log("Do while:", j);
  j++;
} while (j <= 5);

//  4. "for...of" loop for Array
let fruits = ["Apple", "Banana", "Mango"];

for (const fruit of fruits) {
  console.log(fruit);
}

// 5. forEach (ES6 Method)
let numbers = [10, 20, 30];

numbers.forEach((num) => {
  console.log("Number:", num);
});

//=================
// 1. for loop → 1 থেকে 10 পর্যন্ত
for (let i = 1; i <= 10; i++) {
  console.log(i);
}
// ✅ সঠিক

// 2. while loop → 1 থেকে 5 পর্যন্ত
let num = 1;
while (num <= 5) {
  console.log(num);
  num++;
}
// ✅ সঠিক

// 3. for...of loop → শহর প্রিন্ট করা
const cities = ["Dhaka", "Rajshahi", "Chittagong"];
for (const city of cities) {
  console.log(city);
}
// ✅ সঠিক

// 4. forEach loop → array প্রিন্ট করা
const array = [2, 4, 6, 8];
array.forEach((number) => {
  console.log(number);
});
// ✅ সঠিক
