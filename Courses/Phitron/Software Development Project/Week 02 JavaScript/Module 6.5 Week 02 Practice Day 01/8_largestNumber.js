function largestElement(arr) {
    let largestNum = arr[0];
    for (let i = 1; i < arr.length; i++)
        if (arr[i] > largestNum)
            largestNum = arr[i];
    return largestNum;
}

var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
const result = largestElement(numbers);

console.log(`The largest number is: ${result}`);