import React from "react";
import SecondaryComponent from "./SecondaryComponent";

const PrimaryComponents = () => {
  const person = {
    name: "Mahmud",
    age: 30,
    occupation: "Developer",
  };

  return (
    <div>
      {/* <SecondaryComponent person={person} /> */}
      <SecondaryComponent {...person} />
    </div>
  );
};

export default PrimaryComponents;
