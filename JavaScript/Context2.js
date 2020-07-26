var num = 2;

function sayMe() {
    console.log("Say ME...");
}

sayMe();

// ------------------------------------------------------

tipper("5");

function tipper(a) { // This is a pure function
    var bill = parseInt(a);
    console.log(bill + 5);
}

tipper(5);

// -------------------------------------------------------

// bigTipper(200); // It would throw an ERROR

var bigTipper = function (a) { // This function is assigned into a variable
    var bill = parseInt(a);
    console.log(bill + 15);
}

bigTipper("200");

// ------------------------------------------------------

console.log(name);
var name = "Shifat";
console.log(name);

// ------------------------------------------------------

function sayHello() {
    var name = "MD. Shifat Hasan";
    console.log(name);
}
sayHello();

console.log(name); // name = "Shifat"