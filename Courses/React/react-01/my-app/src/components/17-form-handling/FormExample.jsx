import React, {useState} from "react";

const FormExample = () => {
  const [name, setName] = useState("");

  function handleChange() {
    setName(event.target.value); // input change hole state update hobe
  }

  function handleSubmit() {
    event.preventDefault(); // page reaload bondo korbe
    console.log("Sumitted Name", name);
  }

  return (
    <div>
      <h2>Form Handling Example</h2>

      <form onSubmit={handleSubmit}>
        <input
          type="text"
          placeholder="Enter your name"
          value={name} // input value state theke asche
          onChange={handleChange} // input change hole handleChage run hobe
        />
        <button type="submit">Submit</button>
      </form>
      <p>Typed Name: {name}</p>
    </div>
  );
};

export default FormExample;
