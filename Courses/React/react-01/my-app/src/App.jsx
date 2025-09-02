import {useState} from "react";

function App() {
  const [name, setName] = useState("Hasan");

  function changeName() {
    setName("Mahmud");
  }

  return (
    <div>
      <h1>Hello, {name}</h1>
      <button onClick={changeName}>Change Name</button>
    </div>
  );
}

export default App;
