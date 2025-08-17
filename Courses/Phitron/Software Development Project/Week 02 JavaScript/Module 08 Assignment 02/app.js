const apiBase = "https://www.thecocktaildb.com/api/json/v1/1/";
const defaultSearch = "margarita";

const drinkCards = document.getElementById('drinkCards');
const groupSelect = document.getElementById('groupSelect');
const cartCount = document.getElementById('cartCount');
let selectedDrinks = [];

function fetchDrinks(query) {
    fetch(`${apiBase}search.php?s=${query}`)
        .then(response => response.json())
        .then(data => {
            console.log(data);
            drinkCards.innerHTML = '';
            if (data.drinks) {
                data.drinks.forEach(drink => createDrinkCard(drink));
            } else {
                drinkCards.innerHTML = '<p class="text-danger">No results found.</p>';
            }
        })
        .catch(error => {
            console.error('Error fetching data:', error);
            drinkCards.innerHTML = '<p class="text-danger">Failed to load drinks. Please try again later.</p>';
        });
}

function createDrinkCard(drink) {
    const card = document.createElement('div');
    card.classList.add('card');
    card.innerHTML = `
        <img src="${drink.strDrinkThumb}" class="card-img-top" alt="${drink.strDrink}">
        <div class="card-body">
            <h5 class="card-title">${drink.strDrink}</h5>
            <p class="card-text">Category: ${drink.strCategory}</p>
            <p class="card-text">Instructions: ${drink.strInstructions.slice(0, 15)}...</p>
            <div class="d-flex justify-content-between">
                <button class="btn btn-success addToGroup" data-name="${drink.strDrink}" data-thumb="${drink.strDrinkThumb}">Add to Group</button>
                <button class="btn btn-info details" data-id="${drink.idDrink}" data-img="${drink.strDrinkThumb}" data-bs-toggle="modal" data-bs-target="#detailsModal">Details</button>
            </div>
        </div>
    `;
    drinkCards.appendChild(card);
}

function handleAddToGroup(drinkName, drinkThumb, button) {
    if (selectedDrinks.length >= 7) {
        alert('You cannot add more than 7 drinks to the group.');
        return;
    }

    if (!selectedDrinks.includes(drinkName)) {
        selectedDrinks.push(drinkName);
        const listItem = document.createElement('li');
        listItem.classList.add('list-group-item');
        listItem.innerHTML = `
            <span>${selectedDrinks.length}. </span>
            <img src="${drinkThumb}" alt="${drinkName}" style="width: 40px; height: 40px; object-fit: cover; margin-right: 8px; border-radius: 20px;">
            ${drinkName}
        `;
        groupSelect.appendChild(listItem);
        cartCount.textContent = selectedDrinks.length;
        button.textContent = "Already Added";
        button.disabled = true;
    }
}

function fetchDrinkDetails(id, imgSrc) {
    fetch(`${apiBase}lookup.php?i=${id}`)
        .then(response => response.json())
        .then(data => {
            if (data.drinks) {
                const drink = data.drinks[0];
                document.getElementById('modalContent').innerHTML = `
                    <img src="${imgSrc}" alt="${drink.strDrink}" class="img-fluid mb-3">
                    <p><strong>Name:</strong> ${drink.strDrink}</p>
                    <p><strong>Category:</strong> ${drink.strCategory}</p>
                    <p><strong>Alcoholic:</strong> ${drink.strAlcoholic}</p>
                    <p><strong>Glass:</strong> ${drink.strGlass}</p>
                    <p><strong>Instructions:</strong> ${drink.strInstructions}</p>
                `;
            }
        });
}

document.addEventListener('click', (event) => {
    if (event.target.classList.contains('addToGroup')) {
        const drinkName = event.target.dataset.name;
        const drinkThumb = event.target.dataset.thumb;
        handleAddToGroup(drinkName, drinkThumb, event.target);
    } else if (event.target.classList.contains('details')) {
        const drinkId = event.target.dataset.id;
        const drinkImg = event.target.dataset.img;
        fetchDrinkDetails(drinkId, drinkImg);
    }
});

document.getElementById('searchBtn').addEventListener('click', (event) => {
    event.preventDefault();
    const query = document.getElementById('searchInput').value.trim();
    fetchDrinks(query || defaultSearch);
});

fetchDrinks(defaultSearch);