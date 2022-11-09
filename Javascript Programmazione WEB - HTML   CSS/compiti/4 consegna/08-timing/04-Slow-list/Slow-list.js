let array=["Dictionary","Laptop Charge","Nail File","Earring","Zebr","Ba","Teddy Bea","Pillowcas","Pinecon","Pillo","Pant","Acor","Feathe","Tomat","Mobile Phon","Ke","Strin","Stop Sig","Lio","Eye Line","Toilet Pap","Magnifying Glas","Roc","Barbel","Batterie","Cd Playe","Dov","Coffee Ti","Candlestic","Mirror"];
i=0;
let timerId = setInterval(() => {
    console.log(array[i]);
    i++;
    if(i>29){
        clearInterval(timerId);
        console.log("STOP");
    }
},1000);


i=0;
for(j=0;j<30000;j+=1000){
setTimeout(() => {
    j=1000;
    console.log(array[i])
    i++;
}, j);}