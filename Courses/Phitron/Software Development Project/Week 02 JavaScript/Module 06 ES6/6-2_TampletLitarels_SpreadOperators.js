// Template literals 
// backtick (``) 

// String Interpolation 

const name = "Hasan";
const age = 25;

const msg = `My name is ${name} and I am ${age} years old.`;
console.log();
console.log(msg);
console.log();

// Multi-line String 
const paragraph = `This is a
multi-line
string using template literals.`
console.log(paragraph);
console.log();

// Make Dynamic String 
const num1 = 5;
const num2 = 10;

const result = `The sum of ${num1} and ${num2} is ${num1 + num2}.`;
console.log(result);

// Spread Operators 
// Three dots (...) 
// Array or object decompose or merge
// অ্যারে কপি করা: অ্যারের একটি নতুন কপি তৈরি করা।
// অ্যারে মার্জ করা: একাধিক অ্যারে একত্রিত করা।
// অবজেক্ট মার্জ করা: অবজেক্টের প্রপার্টি একত্রিত করা।
// ফাংশনে আর্গুমেন্ট পাস করা: ফাংশনে একাধিক মান পাস করা।

// Arry copy and merge 
const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];

const copyArr = [...arr1]; // copy 
console.log(copyArr);

const mergedArr = [...arr1, ...arr2]; // merge 
console.log(mergedArr);

// Object Merge 
const obj1 = { name: "Hasan" };
const obj2 = { age: 25 };

const mergedObj = { ...obj1, ...obj2 };
console.log(mergedObj);

// Pass function arguments 
function sum(x, y, z) {
    return x + y + z;
}

const numbers = [5, 20, 30];
const results = sum(...numbers);
console.log(results);

// Adding new property 
const person = { name: "Shamim", age: 23 };
const updatedPerson = { ...person, location: "Rajshahi" };
console.log(updatedPerson);

// Tamplet Litarels & Spread Operators 
const fruits = ["Apple", "Banana", "Cherry"];
const additionalFruits = ["Mango", "Pineapple"];

const message = `Available fruits are: ${[...fruits, ...additionalFruits].join(", ")}.`;
console.log(message);
// Output: Available fruits are: Apple, Banana, Cherry, Mango, Pineapple.

// Template Literals জাভাস্ক্রিপ্টে স্ট্রিং ইন্টারপোলেশন এবং মাল্টি-লাইন স্ট্রিং লেখাকে সহজ করেছে।
// Spread Operators ডাটা কপি এবং মার্জ করার কাজ দ্রুত করে তুলেছে।