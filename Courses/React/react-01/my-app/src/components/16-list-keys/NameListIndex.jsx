import React from "react";

const NameList = () => {
  const names = ["Hasan", "Mahmud", "Tonmoy", "Shadow"];

  return (
    <div>
      <h2>Name List</h2>
      <ul>
        {names.map((name, index) => (
          <li key={index}>{name}</li>
        ))}
      </ul>
    </div>
  );
};

export default NameList;

// এখানে key={index} use করা হয়েছে। ছোট example এ index use করা যায়, কিন্তু real project এ unique id use করা best practice।
