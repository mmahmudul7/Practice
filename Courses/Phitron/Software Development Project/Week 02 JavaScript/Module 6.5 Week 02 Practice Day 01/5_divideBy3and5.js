let divisibleNumbers = [];

for (let i = 1; i <= 50; i++) {
    if (i % 3 === 0 && i % 5 === 0)
        divisibleNumbers.push(i);
}

console.log("Numbers divisible by 3 and 5 between 1 and 50:", divisibleNumbers);