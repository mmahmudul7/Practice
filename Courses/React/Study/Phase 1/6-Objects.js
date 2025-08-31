// Making Object
let person = {
  name: "Hasan",
  age: 25,
  city: "Rajshahi",
};

console.log(person);

// Property access of Object
console.log(person.name); // Hasan
console.log(person.age); // 25
console.log(person["city"]); // Rajshahi

// Object modify
// property update
person.age = 26;

// adding new property
person.country = "Bangladesh";

console.log(person);

// Object traverse
for (const element in person) {
  console.log(element + ":" + person[element]);
}

// Delete property from object
delete person.city;
console.log(person);
