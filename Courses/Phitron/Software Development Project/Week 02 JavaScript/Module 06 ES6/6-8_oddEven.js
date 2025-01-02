const separateEvenOdd = (arr) => {
    const evenNumbers = arr.filter((num) => num % 2 === 0);
    const oddNumbers = arr.filter((num) => num % 2 !== 0);

    return { evenNumbers, oddNumbers };
};

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const { evenNumbers, oddNumbers } = separateEvenOdd(numbers);

console.log("Even Numbers:", evenNumbers);
console.log("Odd Numbers:", oddNumbers);