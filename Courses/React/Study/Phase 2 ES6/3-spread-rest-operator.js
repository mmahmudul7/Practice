// Spread for Array
let arr1 = [1, 2];
let arr2 = [3, 4];
let combined = [...arr1, ...arr2];
console.log(combined); // [ 1, 2, 3, 4 ]

console.log([...combined, 5, 6]); // [ 1, 2, 3, 4, 5, 6 ]

// Rest in function
function sum(...numbers) {
  return numbers.reduce((acc, curr) => acc + curr, 0);
}
console.log(sum(1, 2, 3, 4, 5)); //15
