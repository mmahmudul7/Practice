fetch("https://jsonplaceholder.typicode.com/users")
    .then(response => response.json())
    .then(data => {
        console.log(data);
        displayData(data);
    })
    .catch((err) => {
        console.log(err);
    });

const displayData = (userData) => {
    const container = document.getElementById("userData-Container");

    userData.forEach((user) => {
        const div = document.createElement("div");
        div.classList.add("user");

        div.innerHTML = `
            <h4>${user.name}</h4>
            <p>Email: ${user.email}</p>
            <p>Phone: ${user.phone}</p>
            <button onclick="viewDetails(${user.id})">View Details</button>
        `;

        container.appendChild(div);
    });
};

// Details বাটনের জন্য একটি ফাংশন
const viewDetails = (userId) => {
    alert(`User ID: ${userId}`);
};
