const constant_max_age=80;
function calculateSupply(age,amount_per_day){
    cups_of_coffee=(80-age)*365*amount_per_day;

    console.log("You will need "+cups_of_coffee+" cups of coffee to last you until the ripe old age of "+constant_max_age);
}
calculateSupply(23,2);
calculateSupply(50,4);
calculateSupply(79,1);