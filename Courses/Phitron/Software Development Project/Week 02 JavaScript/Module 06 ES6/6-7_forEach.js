const numbers = [1, 2, 3, 4, 5];

numbers.forEach((num) => {
    console.log(num);
});

// Using index 
console.log();
const fruits = ["Apple", "Banana", "Cherry"];

fruits.forEach((fruit, index) => {
    console.log(`${index}: ${fruit}`);
});

// Object 
console.log();
const users = [
    { id: 1, name: "Hasan" },
    { id: 2, name: "Mahmud" },
    { id: 3, name: "Shamim" },
];

users.forEach((user) => {
    console.log(user.name);
});

// Modifying the original array 
const digits = [1, 2, 3, 4, 5];

digits.forEach((num, index, arr) => {
    arr[index] = num * 2
});

console.log();
console.log(digits);

// forEach() সাধারণত একটি অ্যারে ইটারেট করে কাজ সম্পন্ন করার জন্য ব্যবহৃত হয়। যদি নতুন ডেটা প্রয়োজন হয়, তবে map() বেশি কার্যকর।