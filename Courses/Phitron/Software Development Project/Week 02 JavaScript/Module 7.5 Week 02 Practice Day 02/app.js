document.getElementById("searchButton").addEventListener('click', () => {
    let searchQuery = document.getElementById('searchQuery').value;
    let mealDetails = document.getElementById("mealDetails");
    mealDetails.innerHTML = "";

    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${searchQuery}`)
        .then(response => response.json())
        .then(data => {
            const mealList = document.getElementById("mealList");
            mealList.innerHTML = "";

            if (data.meals == null) {
                document.getElementById("errorMessage").style.display = "block";
            } else {
                document.getElementById("errorMessage").style.display = "none";
                data.meals.forEach(meal => {
                    let mealCard = document.createElement("div");
                    mealCard.className = "m-2 singleItem";
                    mealCard.setAttribute('onclick', `showMealDetails('${meal.idMeal}')`);
                    let cardContent = `
                    <div class="card" style="width: 12rem;">
                        <img src="${meal.strMealThumb}" class="card-img-top" alt="">
                        <div class="card-body text-center">
                            <h5 class="card-text">${meal.strMeal}</h5>
                        </div>
                    </div>`;
                    mealCard.innerHTML = cardContent;
                    mealList.appendChild(mealCard);
                });
            }
        })
        .catch(error => {
            console.error("Error fetching data:", error);
            document.getElementById("errorMessage").style.display = "block";
            document.getElementById("errorMessage").innerHTML = "<h3>Something went wrong! Please try again.</h3>";
        });
});

function showMealDetails(id) {
    fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`)
        .then(res => res.json())
        .then(detail => {
            let meal = detail.meals[0];
            let mealDetails = document.getElementById("mealDetails");
            mealDetails.innerHTML = "";
            let detailsCard = document.createElement("div");
            let ingredients = "";
            for (let i = 1; i <= 20; i++) {
                let ingredient = meal[`strIngredient${i}`];
                if (ingredient) ingredients += `<li>${ingredient}</li>`;
            }
            let detailsContent = `
            <div class="card" style="width: 19rem;">
                <img src="${meal.strMealThumb}" class="card-img-top" alt="">
                <div class="card-body">
                    <h3 class="card-text">${meal.strMeal}</h3>
                    <h6>Ingredients</h6>
                    <ul>${ingredients}</ul>
                </div>
            </div>`;
            detailsCard.innerHTML = detailsContent;
            mealDetails.appendChild(detailsCard);
        })
        .catch(error => {
            console.error("Error fetching details:", error);
        });
}