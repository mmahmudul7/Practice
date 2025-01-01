// Arrow Function সাধারণ ফাংশনের চেয়ে সহজ এবং সংক্ষিপ্ত। এটি বিশেষ করে এমন ক্ষেত্রে কার্যকর, যেখানে callback functions বা short utility functions প্রয়োজন। তবে মাল্টি-লাইন এবং জটিল ফাংশনের জন্য Regular Function বেশি সুবিধাজনক।

// Regular Function 
function add(a, b) {
    return a + b;
}

// Arrow Function
const sum = (a, b) => a + b;

// Basic Example

// Regular
const greet = function (name) {
    return `Hello, ${name}!`;
}

// Arrow 
const greetArrow = (name) => `Hello, ${name}!`;

console.log(greet("Hasan"));
console.log(greetArrow("Mahmud"));
console.log();

// More than one parameter
const multiply = (a, b) => a * b;

console.log(multiply(5, 10));
console.log();

// Without parameter 
const sayHello = () => "Hello World!";

console.log(sayHello());
console.log();

// More than one line Function
const subNumbers = (a, b) => {
    const sub = a - b;
    return sub;
};

console.log(subNumbers(15, 5));
console.log();

// Array Maping 
const numbers = [1, 2, 3, 4, 5];
const squares = numbers.map((num) => num * num);

console.log(squares); // Output: [1, 4, 9, 16, 25]

// uses of "this"

function Person(name) {
    this.name = name;
  
    // Regular Function
    this.sayHello = function () {
      console.log(`Hello, my name is ${this.name}`);
    };
  
    // Arrow Function
    this.sayHelloArrow = () => {
      console.log(`Hello, my name is ${this.name}`);
    };
}

const person = new Person("Hasan");
person.sayHello();        // Output: Hello, my name is Hasan
person.sayHelloArrow();   // Output: Hello, my name is Hasan