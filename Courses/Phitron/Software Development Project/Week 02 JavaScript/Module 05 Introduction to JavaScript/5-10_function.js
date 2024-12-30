// Function Declaration

function func(name) {
    return "Hello, " + name + "!";
}

console.log(func("Hasan"));
console.log(func("Shamim"));
console.log();

// Function Expression

const add = function(a, b) {
    return a + b;
}

var summ = add(2, 3);
console.log(summ);
console.log();

// Arrow Function ES6

const multiply = (a, b) => a * b;

let mul = multiply(4, 5);
console.log(mul);
console.log();

// Default Parameter 
function greet(name = "Guest") {
    return "Hello, " + name + "!";
}

console.log(greet());
console.log(greet("Hasan"));
console.log();

// Function without parameters
function sayHello() {
    console.log("Hello JavaScript!");
}

sayHello();
console.log();

// Self-Invoking Function

(function () {
    console.log("This is a self-invoking function!");
})();
console.log();

// Nested function 

function outerFunction() {
    console.log("This is the outer function.");

    function innerFunction() {
        console.log("This is the inner function.");
    }

    innerFunction();
}

outerFunction();
console.log();

// Rest Parameter / Takes Unlimited parameters
function sum(...numbers) {
    return numbers.reduce((acc, num) => acc + num, 0);
}

console.log(sum(1, 2, 3, 4));