import {useEffect, useState} from "react";

function Timer() {
  useEffect(() => {
    console.log("⏳ Timer start হলো");

    return () => {
      // Cleanup function
      console.log("🛑 Timer বন্ধ হলো (Unmount)");
    };
  }, []);

  return <h2>Running Timer...</h2>;
}

function ToggleTimer() {
  const [show, setShow] = useState(true);

  return (
    <div>
      <button onClick={() => setShow(!show)}>Toggle Timer</button>
      {show && <Timer />}
    </div>
  );
}

export default ToggleTimer;
