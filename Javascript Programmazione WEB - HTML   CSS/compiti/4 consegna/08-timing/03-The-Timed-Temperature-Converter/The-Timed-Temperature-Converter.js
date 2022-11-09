let fahrenheit=35;
setInterval(function fahrenheitToCelsius(){
    fahrenheit+=1;
    let temperaturaC=(fahrenheit-32)*(5/9);
    console.log(fahrenheit+"°F is: "+temperaturaC+"°C");
},2000);