// Class Basic
class Student {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  introduce() {
    return `Hi, I am ${this.name}, ${this.age} years old.`;
  }
}

const student1 = new Student("Mahmud", 25);
console.log(student1.introduce());

// Inheritance: One class create from another class
class Person {
  constructor(name) {
    this.name = name;
  }
  greet() {
    return `Hello, I am ${this.name}`;
  }
}

class Teacher extends Person {
  constructor(name, subject) {
    super(name); // Call constructor from parent class
    this.subject = subject;
  }

  teach() {
    return `${this.name} teaches ${this.subject}`;
  }
}

const teacher1 = new Teacher("Hasan", "Math");
console.log(teacher1.greet()); // Parent method
console.log(teacher1.teach()); // Child method

// Encapsulation (Private property → #)
class BankAccount {
  #blance = 0; // private property

  deposit(amount) {
    this.#blance += amount;
    return `Deposited: ${amount}`;
  }

  getBalance() {
    return `Balance: ${this.#blance}`;
  }
}

const account = new BankAccount();
console.log(account.deposit(1000));
console.log(account.getBalance()); // console.log(account.#balance); Direct not access possible

// Static Methods (No need to make object)
class MathHelper {
  static add(a, b) {
    return a + b;
  }
}

console.log(MathHelper.add(2, 3));

//====
class Car {
  constructor(brand, model, year) {
    this.brand = brand;
    this.model = model;
    this.year = year;
  }

  getDetails() {
    return `This is my new ${this.brand} ${this.model}, ${this.year}`;
  }
}

car1 = new Car("Toyota", "Corola", 2025);
car2 = new Car("Honda", "City", 2025);
console.log(car1.getDetails());
console.log(car2.getDetails());

//
class Animal {
  constructor(name) {
    this.name = name;
  }
  hello() {
    return `Hello, ${this.name}`;
  }
}

class Dog extends Animal {
  constructor(name, skinColor) {
    super(name);
    this.skinColor = skinColor;
  }

  bark() {
    return `${this.name} with ${this.skinColor} skin says: Woof! Woof! `;
  }
}

dog1 = new Dog("Shadow", "red");
console.log(dog1.bark());

//
class BankAccount2 {
  #balance = 0;

  constructor(owner) {
    this.owner = owner;
  }

  deposit(amount) {
    if (amount > 0) {
      this.#balance += amount;
      return `Deposited $${amount}.`;
    } else {
      return `Invalid deposit.`;
    }
  }

  withdraw(amount) {
    if (amount > 0 && amount <= this.#balance) {
      this.#balance -= amount;
      return `Withdara $${amount}.`;
    } else {
      return `Insufficient balance.`;
    }
  }

  getBalance() {
    return `Current Balance: $${this.#balance}`;
  }
}

const account1 = new BankAccount2("Hasan");
console.log(account1.deposit(1000));
console.log(account1.withdraw(400));
console.log(account1.getBalance());
// console.log(account1.#balance); // error
