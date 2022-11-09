let body=document.body;
let newElement=document.createElement("h2");
newElement.textContent="This is a list of cars";
body.appendChild(newElement);


let requestURL = 'https://api.jsonbin.io/b/62ac4dee449a1f38210d0a0d/1';
let request = new XMLHttpRequest();
request.open('GET', requestURL);
request.responseType = 'json';
request.send();

request.onload = function() {
    let data = request.response;
    //let stringify=JSON.stringify(data);
    //console.log(stringify);
    data.forEach(element => {
        let newElement=document.createElement("li");
        newElement.className="car";
        let button=document.createElement("button");
        button.className="content";
        newElement.appendChild(button);
        button.textContent=`${element.Name}`
        body.appendChild(newElement);
                
        let onClick = function() {
          
            var output = '';
            let br=body.innerHTML="<br>";
            for (var property in element) {
            output += property + ': ' + element[property]+br;
            body.innerHTML=`<h2>${output}</h2>`;
            }
          };
        button.addEventListener('click', onClick);
          
    });
}