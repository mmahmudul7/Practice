import React from "react";

// function GreetingName(props) {
//   return <p>Hello {props.name}!</p>;
// }

// Props destructuring করা ভালো practice ({ name })
// Function component নাম সবসময় Capital letter দিয়ে শুরু
function GreetingName({name}) {
  return <p>Hello {name}!</p>;
}

const Greeting = () => {
  return (
    <div>
      <h2>2. Greeting Component with Props</h2>
      <GreetingName name="Hasan" />
      <GreetingName name="Mahmud" />
      <GreetingName name="Tonmoy" />
    </div>
  );
};

export default Greeting;
