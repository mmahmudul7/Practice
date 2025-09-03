import React, {useState} from "react";

const CounterApp = () => {
  const [count, setCount] = useState(0);

  function handleDecrease() {
    // Function name → সাধারণত handleSomething বা onSomething convention follow করা হয়।
    setCount(count - 1);
  }

  function handleIncrease() {
    setCount(count + 1);
  }

  function handleReset() {
    setCount(0);
  }

  return (
    <div>
      <h2>1. Counter App</h2>
      <h3>Count: {count}</h3>
      <button onClick={handleDecrease}>Decrease</button>
      <button onClick={handleIncrease}>Increase</button>
      <button onClick={handleReset}>Reset</button>
    </div>
  );
};

export default CounterApp;
