const loadAllProduct = () => {
    fetch('https://fakestoreapi.com/products')
        .then(res => res.json())
        .then(data => {
            console.log(data);
            displayProduct(data);
        })
        .catch(err => console.error(err));
};

const displayProduct = (products) => {
    const productContainer = document.getElementById("product-container");

    products.forEach((product) => {
        const div = document.createElement("div");
        div.classList.add("product-item"); // CSS Class

        // Dynamic HTML
        div.innerHTML = `
            <img src="${product.image}" alt="${product.title}" style="width: 150px; height: 150px;" />
            <h5>${product.title}</h5>
            <p>Price: $${product.price}</p>
            <button onclick="viewDetails('${product.id}', '${product.title.slice(0, 19)}','${product.price}','${product.description}')">Details</button>

            <button onclick="addToCart('${product.title.slice(0, 19)}', '${product.price}')">Add to Cart</button>
        `;

        productContainer.appendChild(div);
    });
};

// Details Function
const viewDetails = (id, title, price, des) => {
    fetch(`https://fakestoreapi.com/products/${id}`)
            .then(res=>res.json())
            .then(json=>console.log(json))
    alert(`
        Product ID: ${id},
        Title: ${title},
        Price: $${price},
        Description: ${des}
        `);
};

// Add to Cart Function
const addToCart = (title, price) => {
    const cartCount = document.getElementById("count").innerText;
    let convertedCount = parseInt(cartCount);
    convertedCount += 1;
    document.getElementById("count").innerText = convertedCount;

    const container = document.getElementById("cart-main-container");
    console.log(title, price);

    const div = document.createElement("div");
    div.classList.add("cart-info");
    div.innerHTML = `
        <p>${title}-</p>
        <p class="price"><strong>$${price}</strong></p>
    `;

    container.appendChild(div);
    updateTotal();
};

// Total price function
const updateTotal = () => {
    const allPrice = document.getElementsByClassName("price");
    let sum = 0;

    for (const element of allPrice) {
        const priceText = element.innerText.replace('$', '').trim();
        sum += parseFloat(priceText);
    }

    document.getElementById("total").innerText = sum.toFixed(2);
};

/*
const updateTotal = () => {
    const allPrice = document.getElementsByClassName("price");
    let sum = 0;
    for (const element of allPrice) {
        sum = sum + parseFloat(element.innerText);
    }
    document.getElementById("total").innerText = sum;
};
*/

// Function call for product load
loadAllProduct();