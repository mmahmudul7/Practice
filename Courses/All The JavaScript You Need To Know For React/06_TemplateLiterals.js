const fetchData = async (animalName) => {
  const data = await fetch(`imaginaryapi.com/searchterm=${animalName}`);
  const name = data.person?.name;
};
