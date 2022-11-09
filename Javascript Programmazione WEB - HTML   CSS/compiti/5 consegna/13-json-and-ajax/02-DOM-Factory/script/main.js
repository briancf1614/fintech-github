let requestURL='https://api.jsonbin.io/b/62af9b53449a1f382110d35f';
let request = new XMLHttpRequest();
request.open('GET', requestURL);
request.responseType = 'json';
request.send();


let body=document.body
const div=document.createElement("div");
div.className="container";
body.appendChild(div);
const h2=document.createElement("h2");
h2.textContent="List of my favorite machines";
div.appendChild(h2);

const newLi=document.createElement("ul");
newLi.className="MyCars";
div.appendChild(newLi);


request.onload = function() {
    const classe=request.response;
    console.log(JSON.stringify(classe));
    classe.forEach(element => {
    const myCar=document.createElement("li");
    myCar.className="car";
    myCar.textContent=`one of my favorite machines with id: ${element.id} è: `+element.Name+"/ of the year: "+element.origin+` and with ${element.Cylinders} of cylinders`;
    
    newLi.appendChild(myCar);
        
    });



}




/*let body=document.body;
let newElement=document.createElement("p");
let text=document.createTextNode("questa è una lista delle mie macchine");
newElement.appendChild(text);
body.appendChild(newElement);
*/

