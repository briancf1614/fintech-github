const Http_Methods = {
    GET: 'GET',
    POST: 'POST',
    PATCH: 'PATCH',
    DELETE: 'DELETE'
};

const requestURL = 'https://api.jsonbin.io/b/62aec3ce402a5b38022e92f8/4';

let request=new XMLHttpRequest();
request.open(Http_Methods.GET, requestURL);
request.responseType = 'json';
request.send();


let body=document.querySelector(".container");
let ul=document.createElement("ul");
ul.className="books";
body.appendChild(ul);

request.onload = function() {
    let data = request.response;
    data.forEach(element => {
        let div=document.createElement("div");
        div.className="conteiner";
        ul.appendChild(div);
        let newElement=document.createElement("li");
        newElement.className="book";
        div.appendChild(newElement);
        let button=document.createElement("button");
        button.className="button";
        newElement.appendChild(button);
        button.textContent=`${element.title}`;
        if(element.alreadyRead){
            newElement.className="book read";
            color=document.querySelectorAll(".book.read button");
            color.forEach(element => {
                element.style.backgroundColor="green";
            });
        }else if(!element.alreadyRead){
            newElement.className="book not-read";
            color=document.querySelectorAll(".book.not-read button");
            color.forEach(element => {
                element.style.backgroundColor="red";
            });
        }

        let image=document.createElement("img");
        image.className="image";
        newElement.appendChild(image);
        image.src=`${element.thumbnailUrl}`;

        let onClick = function() {
            var output = '';
            let br=body.innerHTML="<br>";
            for (var property in element) {
                if(property==="title" || property==="authors" || property==="isbn" || property==="pageCount" || property==="status" || property==="categories" || property==="longDescription"){
                    output += property + ': ' + element[property]+'; '+br;
                    body.innerHTML=`<p>${output}</p>`;
                }
            }};
        button.addEventListener('click', onClick);
        setTimeout(function(){
            let css=document.querySelector(".container");
            css.style.width="80%"
            css.style.margin="0 auto";
            css.style.display="grid";
            css.style.gridTemplateColumns="1fr 1fr";
            css.style.backgroundColor="rgb(202, 202, 202)"
            css.style.border="1px solid black";
            css.style.borderRadius="10px";
            css.style.padding="10px";
            css.style.boxShadow="0 0 10px black";
            css.style.marginTop="20px";
            css.style.marginBottom="20px";
            css.style.fontSize="20px";
            css.style.fontFamily="sans-serif";
            css.style.fontWeight="bold";
            css.style.textAlign="center";
        },5000);

    });
}
