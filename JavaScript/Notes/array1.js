var countries = ["Bangladesh", "India", "Japan", "Russia"];

var states = new Array("Mymensingh", "Dhaka", "Rajshahi", "Sylhet");

console.log(states[1]);
console.log(states.length);

states[0] = "Khulna";
console.log(states);

var user = ["Shifat", "shifat@gmail.com", 3, 34, true];
console.log(user);

user.pop();
console.log(user);

user.unshift("NEW VALUE");
console.log(user);

user.shift();
console.log(user);

console.log(user.indexOf("Hasan"));

console.log(Array.from("Shifat"));