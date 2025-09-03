import React, {useState} from "react";

const NameChangerApp = () => {
  const [name, setName] = useState("Hasan");

  function handleChangeToMahmud() {
    setName("Mahmud");
  }

  function handleChangeToShadow() {
    setName("Shadow");
  }

  return (
    <div>
      <h2>3. Name Changer App</h2>

      <h2>Hello, {name}!</h2>
      <button onClick={handleChangeToMahmud}>Change to Mahmud</button>
      <button onClick={handleChangeToShadow}>Change to Shadow</button>
    </div>
  );
};

export default NameChangerApp;
