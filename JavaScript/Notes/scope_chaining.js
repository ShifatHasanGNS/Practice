var name = "Muhammad Shifat Hasan";

console.log("Line number 3:", name);

function sayName() {
    console.log("Line number 6:", name); // name = undefined
    var name = "Shifat Hasan";
    console.log("Line number 8:", name);

    sayNameTwo();
    function sayNameTwo() {
        console.log("Line number 12:", name); // name = undefined
        var name = "Shifat";
        console.log("Line number 14:", name);
    }
    // sayNameTwo();
}
sayName();

