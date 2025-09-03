import React, {useEffect, useState} from "react";

const EmptyDependencyArray = () => {
  const [count, setCount] = useState(0);

  // useEffect - [] দিলে effect শুধু একবার চলবে (যখন component প্রথমবার লোড হয়)।
  useEffect(() => {
    console.log("This runs only once after first render");
  }, []); // empty dependency

  function handleIncrease() {
    setCount(count + 1);
  }

  return (
    <div>
      <h2>2. useEffect - Empty Dependency Array</h2>
      <p>Check console (RunOnce)</p>
      <h3>Count: {count}</h3>
      <button onClick={handleIncrease}>Increase</button>
    </div>
  );
};
export default EmptyDependencyArray;
