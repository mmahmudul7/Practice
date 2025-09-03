import React, {useState} from "react";

const Notification = () => {
  const [hasMessage] = useState(true);

  return (
    <div>
      <h2>Dashboard</h2>
      {hasMessage && <p>You have a new message!</p>}
    </div>
  );
};

export default Notification;
