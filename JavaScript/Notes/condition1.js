var isLoggedIn = true;
var isEmailVarified = true;
var cardInfo = true;

// if (isLoggedIn) {
//     console.log("Logged in success...");
//     if (isEmailVarified) {
//         console.log("Email is verified...");
//         if (cardInfo) {
//             console.log("You can make a purchase... :)");
//         }
//     }
// }

if (isLoggedIn && isEmailVarified && cardInfo) {
    console.log("You are allowed make a purchase... :)");
}
else console.log("You are not allowed make a purchase... :)");