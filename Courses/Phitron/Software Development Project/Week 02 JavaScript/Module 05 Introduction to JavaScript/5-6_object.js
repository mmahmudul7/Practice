// Object literal

const person = {
    name: "Hasan",          // key: value
    age: 25,
    isMarried: false,
    greet: function() {     // Method
        console.log("Hello, " + this.name);
    }
};

console.log(person.name);  // Output: Hasan
console.log(person["name"]); // Hasan

console.log(person.age);   // Output: 25
person.greet();            // Output: Hello, Hasan
console.log();


// new keyword

const newPerson = new Object();
newPerson.name = "Shamim";
newPerson.age = 30;

console.log(newPerson.name);  // Output: Shamim
console.log(newPerson.age);   // Output: 30
console.log();


// class
class classPerson {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    greet() {
        console.log("Hello, " + this.name);
    }
}

const men = new classPerson("Hasan", 23);
console.log(men.name);  // Output: Hasan
console.log(men.age);   // Output: 23
men.greet();            // Output: Hello, Hasan
console.log();

// loop 

const loopPerson = { name: "Hasan", age: 25 };

for (let key in loopPerson) {
    console.log(key + ": " + loopPerson[key]);
}
console.log();
// Output:
// name: Hasan
// age: 25


// nested object 
const student = {
    name: "Hasan",
    subjects: {
        math: 95,
        english: 88
    }
};

console.log(student.subjects.math); // Output: 95
console.log();

console.log(Object.keys(person)); // Output: [ 'name', 'address' ]
console.log(Object.values(person)); // Output: [ 'Hasan', 'Dhaka' ]
console.log(Object.entries(person)); // Output: [ ['name', 'Hasan'], ['address', 'Dhaka'] ]
