import React from "react";

const ProductList = () => {
  const products = [
    {id: 1, name: "Laptop", available: true},
    {id: 2, name: "Phone", available: false},
    {id: 3, name: "Tablet", available: true},
  ];

  return (
    <div>
      <h2>Product List</h2>
      <ul>
        {products.map((item) => (
          <li key={item.id}>
            {item.name} - {item.available ? "🟢 In Stock" : "🔴 Out of Stock"}
          </li>
        ))}
      </ul>
    </div>
  );
};

export default ProductList;
