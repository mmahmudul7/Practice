// Array Destructuring 
// Basic Destructuring
const fruits = ["Apple", "Banana", "Cherry"];

const [first, second, third] = fruits;
console.log();
console.log(fruits[0]);
console.log(first);
console.log(second);
console.log(third);
console.log();

// Default value 
const numbers = [10, 20];

const [x, y, z = 30] = numbers;
console.log(x);
console.log(y);
console.log(z);
console.log();

// Value skiping 
const colors = ["Red", "Green", "Blue", "Yellow"];

const [, secondColor, , fourthColor] = colors;
console.log(secondColor);
console.log(fourthColor);
console.log();

// Rest Operator 
const newAry = [1, 2, 3, 4, 5];

const [firstNumber, secondNumber, ...rest] = newAry;
console.log(firstNumber);  // Output: 1
console.log(secondNumber); // Output: 2
console.log(rest);   // Output: [3, 4, 5]


// Object Destructuring
// Basic Destructuring

const person = {
    name: "Hasan",
    age: 25,
    location: "Rajshahi"
};

const { name, age, location } = person;
console.log(name)
console.log(age)
console.log(location)
console.log()

// Default value 

const man = {
    mName: "Mahmud",
    mAge: 23
};

const { mName, mAge, mLocation = "Unkonwn"} = man;
console.log(mName)
console.log(mAge)
console.log(mLocation)
console.log()

// Using new varibale name 

const user = {
    id: 101,
    username: "admin"
};

const { id: userId, username: userName } = user;
console.log(userId)
console.log(userName)
console.log()

// Rest Operator 

const employee = {
    eName: "Hasan",
    eAge: 25,
    eLocation: "Rajshahi",
    profession: "Developer"
};

const { eName, ...eRest } = employee;
console.log();
console.log(eName);
console.log(eRest);

// Nested Destructuring
// Array

const users = [
    { id: 1, uName: "Mahmud" },
    { id: 2, uName: "Hasan" },
];

const [firstUser, secondUser] = users;
console.log(firstUser.id);
console.log(firstUser.uName);

console.log(secondUser.id);
console.log(secondUser.uName);
console.log();

// Object 
const objPerson = {
    objName: "Hasan",

    address: {
      city: "Dhaka",
      country: "Bangladesh",
    },
};

const {
    objName,
    address: { city, country },
} = objPerson;
  
console.log(objName);    // Output: Hasan
console.log(city);    // Output: Dhaka
console.log(country); // Output: Bangladesh
console.log();

// Function Destructuring

function sum([a, b]) {
    return a + b;
}

console.log(sum([2, 3]));
console.log();

// Object Parameter 
function greet({ name, age }) {
    return `Hello, my name is ${name} and I am ${age} years old.`;
}

const objUser = { name: "San", age: 20 };
console.log(greet(objUser));