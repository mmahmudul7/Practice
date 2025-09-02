// (a) Global Scope
let globalVar = "I am global";

function global() {
  console.log(globalVar);
}

global();

// (b) Function (Local) Scope
function local() {
  let localVar = "I am local";
  console.log(localVar);
}

local();

// (c) Block Scope (with let/const)
if (true) {
  let blockVar = "I am block scoped";
  console.log(blockVar);
}

// Return vs Console.log
// return → return value out of function
// console.log → print output
function sum(a, b) {
  return a + b;
}

let result = sum(5, 10);
console.log(result); // 15

// ===============
function square(number) {
  return number * number;
}

console.log(square(5)); // 25

// const isEven = (digit) => {
//   if (digit % 2 === 0) return true;
//   else return false;
// };

const isEven = (digit) => digit % 2 === 0;

console.log(isEven(2)); // true
console.log(isEven(7)); // false

let calculator = (a, b, operator) => {
  if (operator === "+") {
    return a + b;
  } else if (operator === "-") {
    return a - b;
  } else if (operator === "*") {
    return a * b;
  } else if (operator === "/") {
    return a / b;
  } else return "Error";
};

console.log(calculator(4, 2, "+")); // 6
console.log(calculator(4, 2, "*")); // 8

// ===
let globalVari = "🌍 Global";

function testFunction() {
  let localVar = "🎯 Local";

  if (true) {
    let blockVar = "🔒 Block";
    console.log(blockVar); // OK
  }

  console.log(localVar); // OK
  // console.log(blockVar); ❌ Error
}

console.log(globalVari); // OK
// console.log(localVar); ❌ Error

// =====
// 🌍 Global variable
let player = "⚽ Messi";

function playground() {
  // 🎯 Local Scope
  let ball = "🏐 Volleyball";

  if (true) {
    // 🔒 Block Scope
    let bat = "🏏 Cricket Bat";

    console.log("Inside block:", bat); // 🏏 Cricket Bat
    console.log("Inside block:", ball); // 🏐 Volleyball
    console.log("Inside block:", player); // ⚽ Messi
  }

  console.log("Inside function:", ball); // 🏐 Volleyball
  console.log("Inside function:", player); // ⚽ Messi
  // console.log("Inside function:", bat); // ?
}

playground();

console.log("Global:", player); // ⚽ Messi
// console.log("Global:", ball);  // can not get
// console.log("Global:", bat);   // can not get
