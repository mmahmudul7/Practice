import React, {useEffect, useState} from "react";

const WithoutDependency = () => {
  const [count, setCount] = useState(0);

  // useEffect - এখানে প্রতি বার render / count পরিবর্তন হলে effect run / useEffect চালু হবে। and Dependency check kore na
  useEffect(() => {
    console.log("Component Rendered or Updated");
  });

  function handleIncrease() {
    setCount(count + 1);
  }

  return (
    <div>
      <h2>1. useEffect - Without Dependency</h2>
      <h3>Count: {count}</h3>
      <button onClick={handleIncrease}>Increase</button>
    </div>
  );
};

export default WithoutDependency;
