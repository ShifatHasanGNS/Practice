sayHello();

function sayHello() {
    console.log("Hello...");
}

if (2 == "2") { // true
    console.log("This is True... (==)");
}

if (2 === "2") { // false
    console.log("This is True... (===)");
}

var myName = "Shifat Hasan";

if (myName === myName) { // true
    console.log("This is again a True statement...");
}

// if (myName === window.myName) { // It should throw an ERROR
//     console.log("This is again a True statement...");
// }