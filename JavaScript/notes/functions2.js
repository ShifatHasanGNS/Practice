var getUserRole = function(name, role) {
    switch (role) {
        case "admin":
            return `${name} is admin with all access...`;
            break; // This is not necessary
        case "subadmin":
            return `${name} is sub-admin with access to create and delete courses...`;
            break; // This is not necessary
        case "testprep":
            return `${name} is test-prep with all access to create and delete tests...`;
            break; // This is not necessary
        case "user":
            return `${name} is a user to consume contents...`;
            break; // This is not necessary
        default:
            return `${name} is a trial user...`;
            break; // This is not necessary
    }
}

console.log(getUserRole("Shifat", "testprep"));

var getRole = getUserRole("Shifat", "user");
console.log(getRole);