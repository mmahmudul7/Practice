// making array
let fruits = ["Apple", "Banana", "Mango", "Orange"];
console.log(fruits);

// Element access of an array
console.log(fruits[0]); // Apple
console.log(fruits[2]); // Mango

// Array modify
// add element at end
fruits.push("Grapes");
console.log(fruits);

// remove element from end
fruits.pop();
console.log(fruits);

// Array length
console.log("Total fruits:", fruits.length);

// Array traverse
fruits.forEach((fruit, index) => {
  console.log(index + ":" + fruit);
});

// remove element first element
fruits.shift();
console.log(fruits);

// adding element at first position
fruits.unshift("Watermelon");
console.log(fruits);
