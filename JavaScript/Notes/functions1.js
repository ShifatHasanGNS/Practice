function sayHello(name="Shifat") {
    console.log("Hello there,", name);
    console.log(`Hello friend, ${name}`);
}

sayHello("Shifat Hasan");

funcName = sayHello;
funcName();


function passName(name) {
    return `Hello, ${name}...`;
}

var greetings = passName("Shifat");
console.log(greetings);

console.log(passName("Shifat Hasan"));