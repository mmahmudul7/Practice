import React, {useState} from "react";

const LiveInput = () => {
  const [name, setName] = useState("");

  return (
    <div>
      <h2>5. Hello App</h2>
      <input
        type="text"
        placeholder="Enter your name"
        value={name}
        onChange={(e) => setName(e.target.value)}
      />
      <p className="mt-2 text-lg">Hello, {name || "Stranger"}!</p>
    </div>
  );
};

export default LiveInput;
