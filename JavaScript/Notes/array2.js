function isEven1(element) // Normal Function
{
    return element % 2 === 0;
}

var isEven2 = function(element) // Variable Function
{
    return element % 2 === 0;
}

var isEven3 = (element) => // Arrow Function
{
    return element % 2 === 0;
}

// console.log(isEven1(2));
// console.log(isEven2(3));
// console.log(isEven3(4));

var result1 = [2, 4, 5, 6, 8].every(isEven3);
console.log(result1);

var result2 = [2, 4, 6, 8].every((e) => {
    return e % 2 === 0;
});
console.log(result2);

var result3 = [2, 4, 6, 8].every((e) => (e%2 === 0));
console.log(result3);