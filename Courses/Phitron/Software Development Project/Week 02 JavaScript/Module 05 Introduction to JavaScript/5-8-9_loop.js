// for
// while
// do...while
// for...in
// for...of

array = ["Mahmud", "Hasan", "Shamim", "Muhammad", "Ibrahim"];

for (let index = 0; index < array.length; index++) {
    const element = array[index];
    console.log(array[index]);
}
console.log();

for (let i = 0; i < 5; i++) {
    console.log("Number: " + i);
}
console.log();
// Output:
// Number: 0
// Number: 1
// Number: 2
// Number: 3
// Number: 4


let j = 0;
while (j < 5) {
    console.log("Number: " + j);
    j++;
}
console.log();
// Output:
// Number: 0
// Number: 1
// Number: 2
// Number: 3
// Number: 4

let k = 0;
do {
    console.log("Number: " + k);
    k++;
} while (k < 5);
console.log();
// Output:
// Number: 0
// Number: 1
// Number: 2
// Number: 3
// Number: 4


const person = { name: "Hasan", age: 25, city: "Dhaka" };
for (let key in person) {
    console.log(key + ": " + person[key]);
}
console.log();
// Output:
// name: Hasan
// age: 25
// city: Dhaka

const fruits = ["Apple", "Banana", "Mango"];
for (let index in fruits) {
    console.log(index + ": " + fruits[index]);
}
console.log();
// Output:
// 0: Apple
// 1: Banana
// 2: Mango

const fruitss = ["Apple", "Banana", "Mango"];
for (let fruit of fruitss) {
    console.log(fruit);
}
console.log();
// Output:
// Apple
// Banana
// Mango

for (let i = 0; i < 10; i++) {
    if (i === 5) break;
    console.log(i);
}
console.log();
// Output: 0 1 2 3 4

for (let i = 0; i < 10; i++) {
    if (i === 5) continue;
    console.log(i);
}
// Output: 0 1 2 3 4 6 7 8 9
