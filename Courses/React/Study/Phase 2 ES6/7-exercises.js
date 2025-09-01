// 1. Array map, filter, reduce
const numbers = [1, 2, 3, 4, 5];

const multiply = numbers.map((number) => number * 5);
console.log("Multiplication:", multiply);
// [5, 10, 15, 20, 25]

const biggerThan10 = multiply.filter((bigNum) => bigNum > 10);
console.log("Bigger than 10:", biggerThan10);
// [15, 20, 25]

const sum = numbers.reduce((acc, curr) => acc + curr, 0);
console.log("Sum:", sum);
// 15

// 2. Data fetch from API using async function
async function dataFetch() {
  try {
    let result = await fetch("https://jsonplaceholder.typicode.com/todos/");
    let data = await result.json();
    console.log("First 5 data:", data.slice(0, 5));
  } catch (error) {
    console.error("Error fetching data:", error);
  }
}

dataFetch();

// 3. Object variable extract using destructuring
const person = {
  name: "Mahmud",
  age: 25,
  city: "Rajshahi",
};

const {name: firstName, age: old, city: venue, country = "BD"} = person;

console.log("Name:", firstName); // Mahmud
console.log("Age:", old); // 25
console.log("City:", venue); // Rajshahi
console.log("Country:", country); // BD (default value)
