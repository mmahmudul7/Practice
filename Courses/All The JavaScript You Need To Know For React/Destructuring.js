import {useState} from "react";

const person = {
  name: "Bill",
  age: 30,
  occupation: "Developer",
};

let {name, age, occupation} = person;

console.log(name);

// Distructuring Array
const vehicles = ["accord", "silverado", "odyssey"];

const [car, truck, van] = vehicles;

console.log(truck);

///
const [name, getName] = useState("");
// name is return 1st value of useState and
// getName retrun 2nd value of useState
