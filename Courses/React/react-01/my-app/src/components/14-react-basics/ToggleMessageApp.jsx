import React, {useState} from "react";

const ToggleMessageApp = () => {
  const [show, setShow] = useState(true);

  function handleToggle() {
    setShow(!show);
  }

  return (
    <div>
      <h2>4. Toggle Message App</h2>
      <h3>{show ? "Welcome to React" : "Goodbye React"}</h3>
      <button onClick={handleToggle}>
        {show ? "Hide Message" : "Show Message"}
      </button>
    </div>
  );
};

export default ToggleMessageApp;
