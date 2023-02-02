var user = "abc"

switch (user) {
    case "admin":
        console.log("You get full access...");
        break;

    case "subadmin":
        console.log("Gets access to create/delete courses...");
        break;

    case "test123":
        console.log("Gets access to create/delete tests...");
        break;
    
    case "user":
        console.log("Gets access to consume contents...");
        break;

    default:
        console.log("Maybe a trial user...");
        break;
}