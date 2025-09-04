import React from "react";

const ProductList = () => {
  const products = [
    {id: 101, name: "Laptop", price: 85000, inStock: true},
    {id: 102, name: "Mobile", price: 25000, inStock: true},
    {id: 103, name: "Headphone", price: 3000, inStock: false},
    {id: 104, name: "Keyboard", price: 2000, inStock: true},
  ];

  return (
    <div>
      <h2>Product List</h2>
      <ul>
        {products.map((product) => (
          <li
            key={product.id}
            // style={{color: product.inStock ? "green" : "red"}}
          >
            {product.name} - {product.price} Tk (
            {product.inStock ? (
              <span style={{color: "green"}}>Available</span>
            ) : (
              "Out of Stock"
            )}
            )
          </li>
        ))}
      </ul>
    </div>
  );
};

export default ProductList;
