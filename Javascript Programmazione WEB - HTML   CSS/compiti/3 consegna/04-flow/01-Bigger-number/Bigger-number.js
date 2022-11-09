function greaterNum(number1,number2){

    if(number1<number2){
        var greater_number=number2;
    }else{
        greater_number=number1
    }
    console.log("The greater number of "+number1+" and "+number2+" is "+greater_number+".");
}
greaterNum(5,9);
greaterNum(15,1);