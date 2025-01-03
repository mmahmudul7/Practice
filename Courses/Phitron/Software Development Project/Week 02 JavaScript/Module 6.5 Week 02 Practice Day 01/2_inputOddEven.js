const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question("Enter a number: ", (input) => {
    const number = parseInt(input);

    if (number % 2 === 0)
        console.log(`${number} is an even number.`);
    else
        console.log(`${number} is an odd number.`);

    rl.close();
});
