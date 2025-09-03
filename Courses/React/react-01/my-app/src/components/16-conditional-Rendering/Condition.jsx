import React, {useState} from "react";

const Condition = () => {
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  if (isLoggedIn) {
    return (
      <div>
        <h2>Welcome Back!</h2>
        <button onClick={() => setIsLoggedIn(false)}>Logout</button>
      </div>
    );
  } else {
    return (
      <div>
        <h2>Please Login</h2>
        <button onClick={() => setIsLoggedIn(true)}>Login</button>
      </div>
    );
  }
};

export default Condition;
