let cartForParty ={
    book:"7.50",
    banana:"2.00",
    water:"1.00",
    computer:"500.00",
    apple:"2.00",
    phone:"300.00",
    mouse:"10.00",
}
function cashRegister(object){
    let somma =parseFloat(object.book)+parseFloat(object.banana)+parseFloat(object.water)+parseFloat(object.computer)+parseFloat(object.apple)+parseFloat(object.phone)+parseFloat(object.mouse);
    console.log("la somma di tutto è: "+somma.toFixed(2));
}
cashRegister(cartForParty);