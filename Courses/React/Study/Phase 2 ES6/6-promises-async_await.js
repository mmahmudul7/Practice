// Concepts: Async programming - Promise

let p = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Done!"), 3000);
});

p.then((result) => console.log(result));

// Async/Await
async function fetchData() {
  let result = await fetch("https://jsonplaceholder.typicode.com/todos/1");
  let data = await result.json();
  console.log(data);
}

fetchData();
