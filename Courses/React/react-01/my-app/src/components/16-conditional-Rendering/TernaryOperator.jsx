import React, {useState} from "react";

const TernaryOperator = () => {
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  return (
    <div>
      <h2>{isLoggedIn ? "Welcome Back" : "Please Login"}</h2>
      <button onClick={() => setIsLoggedIn(!isLoggedIn)}>Toggle Login</button>
    </div>
  );
};

export default TernaryOperator;
