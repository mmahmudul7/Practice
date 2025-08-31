// For Loop
for (let i = 1; i <= 10; i++) {
  console.log(i);
}

// While Loop
let i = 1;
while (i <= 10) {
  console.log(i);
  i++;
}

// "for...of" Loop for Array
let fruits = ["Apple", "Banana", "Mango", "Orange"];

for (let fruit of fruits) {
  console.log(fruit);
}

// forEach
fruits.forEach(function (fruit) {
  console.log(fruit);
});

// with index
fruits.forEach(function (fruit, index) {
  console.log(index + ": " + fruit);
});

// with Arrow function
fruits.forEach((fruit, index) => {
  console.log(`Fruit at position ${index} is ${fruit}`);
});

// ==
for (let i = 1; i < 21; i++) {
  if (i % 2 === 0) {
    console.log(i);
  }
}

for (let fruit of fruits) {
  if (fruit === "Mango") continue;
  console.log(fruit);
}
