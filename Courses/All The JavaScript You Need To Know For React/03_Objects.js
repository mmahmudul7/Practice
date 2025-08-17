const person = {
  name: "Pedro",
  age: 20,
  isMarried: false,
};

// const name = person.name
// const age = person.age
// const isMarried = person.isMarried

const {name, age, isMarried} = person;

/// Recommended way
const name = "Pedro";
const age = 20;

const person = {
  name,
  age,
  isMarried: false,
};

///////////////// Spread Operator

const person = {
  name: "Pedro",
  age: 20,
  isMarried: false,
};

const person2 = {...person, name: "Jack"};

const names = ["Pedro", "Jack", "Jessica"];
const names2 = [...names, "Joel"];
