let marks = 85;

if (marks >= 90 && marks <= 100) {
    console.log("Grade: A+");
} else if (marks >= 80) {
    console.log("Grade: A");
} else if (marks >= 70 || marks <= 60) {
    console.log("Grade: B");
} else {
    console.log("Grade: C");
}

// Ternary Operator
let age = 18;
let status = (age >= 18) ? "Adult" : "Not Adult";
console.log(status);
