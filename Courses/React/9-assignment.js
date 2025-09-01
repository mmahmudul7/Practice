// Object destructuring
const student = {
  name: "Mahmud",
  age: 25,
  subject: "CSE",
};

const {name: firstName, age: time, subject: department} = student;
console.log(firstName);
console.log(time);
console.log(department);

// Array Merge
const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];
const array = [...arr1, ...arr2];

console.log(array);

// sum function using ...rest parameter
function sum(...rest) {
  let total = 0;
  for (let number of rest) {
    total += number;
  }
  return total;
}

console.log(sum(2, 3));
console.log(sum(2, 4, 6, 8, 10));

// Function with default parameter
function helloMsg(name, msg = "Hello") {
  console.log(`${msg}, ${name}!`);
}

helloMsg("Mahmud");
helloMsg("Hasan");
