// Discount = [(List_Price - Selling_Price)/List_Price] * 100

var sellingPrice = 199
var listingPrice = 799

var discountPercent = ((listingPrice-sellingPrice)/listingPrice)*100;

console.log(`Discount persentage is : ${discountPercent} %`);

displayDiscountPersentage = Math.round(discountPercent);

console.log("Discount persentage is : " + displayDiscountPersentage + " %");