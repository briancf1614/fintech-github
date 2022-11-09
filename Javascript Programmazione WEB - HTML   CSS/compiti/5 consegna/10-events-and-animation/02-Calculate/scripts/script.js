let body=document.body;


let div=document.querySelector("input#solution");
let input=document.querySelector("input#square-input");
let buttonSquare=document.querySelector("button#square-button");
let buttonHalf=document.querySelector("button#half-button");
let buttonPercent=document.querySelector("button#percentage-button");
let buttonCircle=document.querySelector("button#circle-button");

let solution=document.createElement("h2");
solution.className="solution";
body.appendChild(solution);

let square
let half
let percent
let circle

buttonSquare.addEventListener("click",function(){
    square=Math.pow(input.value,2);
    solution.innerHTML=`The square of the number is: ${square}`;
})
buttonHalf.addEventListener("click",function(){
    half=input.value/2;
    solution.innerHTML=`The half of the number is: ${half}`;
})
buttonPercent.addEventListener("click",function(){
    percent=input.value/100;
    solution.innerHTML=`The percentage of the number is: ${percent}`;
})
buttonCircle.addEventListener("click",function(){
    circle=Math.PI*Math.pow(input.value,2);
    solution.innerHTML=`The circle area of the number is: ${circle}`;
})

