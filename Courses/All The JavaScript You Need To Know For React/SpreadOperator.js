const numbersOne = [1, 2, 3, 4];
const numbersTwo = [5, 6, 7, 8];
const numbersCombined = [...numbersOne, ...numbersTwo];
const copyOfTwo = [...numbersTwo];
const newArr = [...numbersTwo, 9, 10];

console.log(numbersCombined);
console.log(newArr);

/// Copy the Object
const circle = {
  radius: 10,
  style: {
    color: "blue",
  },
};

const clonedCircle = {
  ...circle,
};

console.log(clonedCircle);
