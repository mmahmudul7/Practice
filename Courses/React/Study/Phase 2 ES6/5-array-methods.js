let nums = [1, 2, 3, 4, 5];

let doubled = nums.map((n) => n * 2);
console.log(doubled); // [2,4,6,8,10]

let even = nums.filter((n) => n % 2 === 0);
console.log(even); // [2,4]

let sum = nums.reduce((acc, curr) => acc + curr, 0);
console.log(sum); // 15
