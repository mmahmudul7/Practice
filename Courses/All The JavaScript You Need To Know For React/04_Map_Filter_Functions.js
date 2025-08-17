let names = ["Pedro", "Jack", "Jessica", "Pedro", "Pedro"];

names.map((name) => {
  //   console.log("Muhammad " + name);
  //   return "Muhammad " + name;
  return <h1>Muhammad {name}</h1>;
});

//// Filter
names.filter((name) => {
  return name != "Pedro";
});
