function theCalculator(number){
    half=number/2;
    square=half*half;
    area=Math.PI*2*2;
    percentage=(area*square)/100;

    setTimeout(() => {
        console.log(half);
    }, 3000);
    setTimeout(() => {
        console.log(square);
    }, 3000*2);
    setTimeout(() => {
        console.log(area);
    }, 3000*3);
    setTimeout(() => {
        console.log(percentage+"%");
    }, 3000*4);
}
theCalculator(20);
