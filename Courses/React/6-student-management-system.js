const student = {
  name: "Mahmud",
  age: 25,
  grade: "A",
  info: function () {
    return `I am ${this.name}. I am ${this.age} years old and my grade is ${this.grade}`;
  },
};

console.log(student.info());

student.grade = "A+";
console.log(student.info());

student.subject = "CSE";
console.log("New property:", student.subject);

for (const key in student) {
  console.log(key, ":", student[key]);
}
