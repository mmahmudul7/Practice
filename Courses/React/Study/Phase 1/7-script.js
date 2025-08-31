// DOM Access
let title = document.getElementById("title");
console.log(title.innerText);

let input = document.getElementById("nameInput");
console.log(input.value);

let button = document.getElementById("greetBtn");
let resetButton = document.getElementById("resetBtn");
let warning = document.getElementById("warning");

// Event Handling
button.addEventListener("click", function () {
  let name = input.value.trim();
  if (name === "") {
    // alert("Please type your name");
    warning.style.display = "block";
  } else {
    title.innerText = "Hello " + name + "!";
    warning.style.display = "none";
  }
});

// Reset to "Hello World"
resetButton.addEventListener("click", function () {
  title.innerText = "Hello World";
  input.value = "";
  warning.style.display = "none";
});
