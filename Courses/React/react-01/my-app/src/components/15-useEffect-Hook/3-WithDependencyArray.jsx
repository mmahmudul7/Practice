import React, {useEffect, useState} from "react";

const WithDependencyArray = () => {
  const [count, setCount] = useState(0);

  // useEffect - [count] দিলে effect শুধু তখনই চলবে যখন count পরিবর্তন হবে।
  useEffect(() => {
    console.log("This runs when count changes");
    // console.log(`🔄 Count changed: ${count}`);
  }, [count]); // শুধু count পরিবর্তন হলে চলবে

  function handleIncrease() {
    setCount(count + 1);
  }

  return (
    <div>
      <h2>3. useEffect - With Dependency Array</h2>
      <h3>Count: {count}</h3>
      <button onClick={handleIncrease}>Increase</button>
    </div>
  );
};

export default WithDependencyArray;
