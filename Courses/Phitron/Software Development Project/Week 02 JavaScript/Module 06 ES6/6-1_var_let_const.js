// var
function varExample() {
    if (true) {
        var x = 10;
    }
    console.log(x); // Output: 10 (ব্লকের বাইরেও অ্যাক্সেসযোগ্য)
}

var num = 5;
var num = 9;

console.log(num);

function name() {
    if(true) {
        var nam = "Mahmud";
    }

    if(true) {
        console.log(nam);
    }
}

name()

// let
function letExample() {
    if (true) {
        let y = 20;
        console.log(y); // Output: 20
    }
    // console.log(y); // এরর: y ডিক্লেয়ার হয়নি
}

let number = 90;
number = 95

console.log(number);


// const
function constExample() {
    const z = 30;
    console.log(z); // Output: 30
    // z = 40; // এরর: Assignment to constant variable
}

varExample();
letExample();
constExample();

// নতুন প্রজেক্টে let এবং const ব্যবহার করুন।
// var পুরনো ব্রাউজার বা কোডের সাথে সামঞ্জস্য রাখতে প্রয়োজন হলে ব্যবহার করুন।
// const সর্বাধিক ব্যবহার করার চেষ্টা করুন। যখন প্রয়োজন, তখন let ব্যবহার করুন।

// var vs let 

function varScoping() {
    var x = 1;
  
    if (true) {
      var x = 2;
      console.log(x); // will print 2
    }
  
    console.log(x); // will print 2
}
  
function letScoping() {
    let x = 1;
  
    if (true) {
      let x = 2;
      console.log(x); // will print 2
    }
  
    console.log(x); // will print 1
}

varScoping()
letScoping()