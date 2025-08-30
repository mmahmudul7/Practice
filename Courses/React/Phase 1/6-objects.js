// key-value pair
// 1. Object Declare
const person = {
  name: "Hasan",
  age: 22,
  city: "Dhaka",
  isStudent: true,
};

// 2. Object Property Access
console.log(person.name);
console.log(person.age);

// 3. Update & Add Property
person.age = 23; // Update
person.country = "Bangladesh"; // Add new property
console.log(person);

// 4. Delete Property
delete person.isStudent;
console.log(person);

// 5. Methods (Function inside Object)
const student = {
  name: "Rahim",
  marks: 85,
  greet: function () {
    return `Hello, my name is ${this.name}`;
  },
};

console.log(student.greet());

// 6. Loop through Object
const car = {
  brand: "Toyota",
  model: "Corolla",
  year: 2020,
};

for (let key in car) {
  console.log(key, ":", car[key]);
}

//=========
const book = {
  title: "JavaScript",
  author: "MD Mahmudul Hasan",
  year: 2025,
};

console.log(book.title);
book.year = 2024;
console.log(book.year);
book.publisher = "OneSix";
console.log(book.publisher);

//
const player = {
  name: "Hasan",
  team: "OneSix",
  score: 3.5,
  introduce: function () {
    return `Hi, I am ${this.name} from ${this.team}`;
  },
};

console.log(player.introduce());

//
const phone = {
  brand: "Nokia",
  model: 1100,
  price: 75,
};

for (const key in phone) {
  console.log(key, ":", phone[key]);
}
