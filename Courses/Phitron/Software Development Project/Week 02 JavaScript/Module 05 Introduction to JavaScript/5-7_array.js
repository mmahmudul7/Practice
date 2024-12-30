// Array Literal

const fruits = ["Apple", "Banana", "Mango"];
console.log(fruits);          // Output: [ 'Apple', 'Banana', 'Mango' ]
console.log(fruits[0]);       // Output: Apple (First element)
console.log(fruits.length);   // Output: 3 (Total amount of elements)
console.log();

// new Array()
const fruit = new Array("Apple", "Banana", "Mango");
console.log(fruit);          // Output: [ 'Apple', 'Banana', 'Mango' ]
console.log();


fruits.push("Orange");
console.log(fruits); // Output: [ 'Apple', 'Banana', 'Mango', 'Orange' ]

fruits.unshift("Grapes");
console.log(fruits); // Output: [ 'Grapes', 'Apple', 'Banana', 'Mango' ]


fruits.pop();
console.log(fruits); // Output: [ 'Grapes', 'Apple', 'Banana', 'Mango' ]

fruits.shift();
console.log(fruits); // Output: [ 'Apple', 'Banana', 'Mango' ]

console.log(fruits[1]); // Output: Banana

fruits[1] = "Pineapple";
console.log(fruits); // Output: [ 'Apple', 'Pineapple', 'Mango' ]

// -----------------
const numbers = [1, 2, 3, 4, 5];
const sliced = numbers.slice(1, 3);
console.log(sliced); // Output: [ 2, 3 ]

numbers.splice(2, 1, 99); // 2 নম্বর ইনডেক্সে 99 যোগ এবং একটি উপাদান সরায়
console.log(numbers); // Output: [ 1, 2, 99, 4, 5 ]


const arr1 = [1, 2];
const arr2 = [3, 4];
const combined = arr1.concat(arr2);
console.log(combined); // Output: [ 1, 2, 3, 4 ]


console.log(fruits.indexOf("Pineapple")); // Output: 1

fruits.forEach(fruit => console.log(fruit));
// Output:
// Apple
// Pineapple
// Mango

const numbers2 = [1, 2, 3];
const doubled = numbers2.map(num => num * 2);
console.log(doubled); // Output: [ 2, 4, 6 ]


const even = numbers2.filter(num => num % 2 == 0);
console.log(even); // Output: [ 2 ]

var nestedArray2 = [[1, 2], [3, 4], [5, 6]];
console.log(nestedArray2[1][0]); // Output: 3



const nestedArray = [
    [1, 2],
    [3, 4],
    [5, 6]
];

// প্রথম উপাদান অ্যাক্সেস করা (বাইরের অ্যারে)
console.log(nestedArray[0]); // Output: [1, 2]

// প্রথম উপাদানের প্রথম উপাদান (ভিতরের অ্যারে)
console.log(nestedArray[0][0]); // Output: 1

// দ্বিতীয় অ্যারের দ্বিতীয় উপাদান
console.log(nestedArray[1][1]); // Output: 4

// তৃতীয় অ্যারের প্রথম উপাদান
console.log(nestedArray[2][0]); // Output: 5


