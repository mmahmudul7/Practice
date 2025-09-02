// Part 1: New ES6 Features
// Template Literals
let name = "Hasan";
console.log(`Hello, ${name}! How are you?`);

// Arrow Functions
const add = (a, b) => a + b;
console.log(add(5, 7)); // 12

// Default Parameters
function greet(name = "Guest") {
  console.log(`Hello, ${name}`);
}
greet(); // Hello, Guest
greet("Mahmud"); // Hello, Mahmud

// Destructuring
const person = {lastName: "Hasan", age: 22};
const {lastName, age} = person;
console.log(lastName, age);

// Spread Operator
const arr1 = [1, 2, 3];
const arr2 = [...arr1, 4, 5];
console.log(arr2);

// Rest Operator
function sum(...nums) {
  return nums.reduce((acc, val) => acc + val, 0);
}
console.log(sum(2, 4, 6)); // 12

// Part 2: Async JavaScript
// setTimeout (একবার delay করে কাজ করে)
console.log("Start");
setTimeout(() => {
  console.log("After 2 seconds");
}, 2000);
console.log("End");

// setInterval (পুনরাবৃত্তি করে কাজ করে)
let count = 1;
const interval = setInterval(() => {
  console.log("Count:", count);
  count++;
  if (count > 5) clearInterval(interval);
}, 1000);

// Promises (Future value handle করে)
const myPromise = new Promise((resolve, reject) => {
  let success = true;
  if (success) resolve("✅ Task Successful!");
  else reject("❌ Task Failed!");
});

myPromise.then((msg) => console.log(msg)).catch((err) => console.log(err));

// async/await (Promises এর easy version)
function fakeAPI() {
  return new Promise((resolve) => {
    setTimeout(() => resolve("🎉 Data received!"), 2000);
  });
}

async function getData() {
  console.log("Fetching...");
  let result = await fakeAPI();
  console.log(result);
}
getData();

// ===
setTimeout(() => {
  console.log("Welcome to Async JS");
}, 3000);

let amount = 1;
const interval1to10 = setInterval(() => {
  console.log(amount);
  amount++;
  if (amount > 10) clearInterval(interval1to10);
}, 1000);

const oddEvenPromise = new Promise((resolve, reject) => {
  let number = 8;
  if (number % 2 === 0) resolve("Even Number");
  else reject("Odd Number");
});

oddEvenPromise.then((msg) => console.log(msg)).catch((err) => console.log(err));

async function fetchData() {
  const response = await fetch("https://jsonplaceholder.typicode.com/posts/1");
  const data = await response.json();
  console.log(data);
}

fetchData();
