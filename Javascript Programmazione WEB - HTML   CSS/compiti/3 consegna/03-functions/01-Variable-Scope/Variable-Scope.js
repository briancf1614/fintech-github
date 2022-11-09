let localResult=10;
function addNumbers(num1, num2) {
  let localResult = num1 + num2;
  console.log("The local result is: " + localResult);
}
addNumbers(5, 7);
console.log(localResult);



let globalResult;
function addNumbers(num1, num2) {
  globalResult = num1 + num2;
  console.log("The global result is: " + globalResult);
}
addNumbers(5, 7);
console.log(globalResult);