const sum = function (x, y) {
  return x + y;
};

const sum = (x, y) => x + y;

////////////// Function
function DoSomething() {}

const DoSomething = () => {};

///////////////// Arrow Funtion
export default function DoSomething() {}

export const DoSomething = () => {};

///////////// Components
const MyComponent = () => {
  return <div></div>;
};

//////////// Anonimous Funtion
<button
  onClick={() => {
    console.log("hellow world");
  }}
></button>;
