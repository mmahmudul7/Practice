let age = 16;
let name = age > 10 ? "Pedro" : "Jack";

console.log(name);

const Component = () => {
  return age > 10 ? <div>Pedro</div> : <div>jack</div>;
};
