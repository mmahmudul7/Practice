const fetchData = async () => {
  const data = await fetch("imaginaryapi.com");
  const name = data.person?.name;
};
