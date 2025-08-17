function monthlySavings(allPayments, livingCost) {
    // Validate inputs
    if (!Array.isArray(allPayments) || typeof livingCost !== "number") {
        return "invalid input";
    }

    // Validate that all elements in the array are numbers
    for (let payment of allPayments) {
        if (typeof payment !== "number") {
            return "invalid input";
        }
    }

    // Calculate total payment
    let totalPayment = 0;
    for (let payment of allPayments) {
        totalPayment += payment;
    }

    // Subtract 20% tax
    const afterTax = totalPayment - totalPayment * 0.2;

    // Calculate savings
    const savings = afterTax - livingCost;

    // Return result based on savings
    if (savings > 0) {
        return savings; // Positive savings
    } else if (savings === 0) {
        return 0; // No savings
    } else {
        return "earn more"; // Negative savings
    }
}

// Example test cases
console.log(monthlySavings([1000, 2000, 3000], 5400)); // Output: 0
console.log(monthlySavings([1000, 2000, 2500], 5000)); // Output: 500
console.log(monthlySavings([900, 2700, 3400], 10000)); // Output: "earn more"
console.log(monthlySavings(100, [900, 2700, 3400]));  // Output: "invalid input"
