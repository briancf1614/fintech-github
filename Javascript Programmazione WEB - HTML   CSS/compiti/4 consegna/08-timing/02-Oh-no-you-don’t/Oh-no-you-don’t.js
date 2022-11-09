
let myId=setTimeout(useful,10000,"love");
function useful(x){
    let answer=x;
    console.log("the answer is always: "+answer);
}
function stopFunction() {   
    clearTimeout(myId);
    console.log("sorry i can't afford it");
}
setTimeout(stopFunction,5000);