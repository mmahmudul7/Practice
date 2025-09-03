import React, {useState, useEffect} from "react";

const EffectTest = () => {
  const [count, setCount] = useState(0);
  const [text, setText] = useState("");

  useEffect(() => {
    console.log("🔥 No dependency: I run on every render");
  });

  useEffect(() => {
    console.log("🎯 Count changed: useEffect with [count]");
  }, [count]);

  useEffect(() => {
    console.log("✍️ Text changed: useEffect with [text]");
  }, [text]);

  return (
    <div>
      <h2>Count: {count}</h2>
      <button onClick={() => setCount(count + 1)}>Increase Count</button>

      <br />
      <br />
      <input
        type="text"
        value={text}
        onChange={(e) => setText(e.target.value)}
        placeholder="Type something..."
      />
    </div>
  );
};

export default EffectTest;
