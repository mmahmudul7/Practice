import React from "react";

const UserList = () => {
  const users = [
    {id: 1, name: "Hasan", age: 25},
    {id: 2, name: "Mahmud", age: 26},
    {id: 3, name: "Shamim", age: 24},
  ];

  return (
    <div>
      <h2>User List</h2>
      <ul>
        {users.map((user) => (
          <li key={user.id}>
            {user.name} - {user.age}
          </li>
        ))}
      </ul>
    </div>
  );
};

export default UserList;

// এখানে প্রতিটি object এর id কে key হিসেবে use করেছি। এটা best practice কারণ id সবসময় unique হয়।

// Key এর rules
/*
Key অবশ্যই unique হতে হবে।

Key শুধু list এর child এ লাগবে।

Index কে key হিসেবে use করলে future এ list update এর সময় bug আসতে পারে।
*/
