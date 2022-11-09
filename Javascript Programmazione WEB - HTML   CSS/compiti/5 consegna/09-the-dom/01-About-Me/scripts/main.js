
let body = document.body;
body.style.fontFamily = "Arial, sans-serif";
let Nickname=document.getElementById("nickname");
Nickname.innerHTML+="Briancito";
let Favorites=document.getElementById("favorites");
Favorites.innerHTML+="games";
let Hometown=document.getElementById("hometown");
Hometown.innerHTML+="Turin";


let lista=document.getElementsByTagName('li')//not work
lista[0].className="list-item"
lista[1].className="list-item"
lista[2].className="list-item"


let imags=document.createElement("img")
imags.src="https://lh3.googleusercontent.com/pw/AM-JKLVnuereLd8wuiWKYgf1152ZmUpKwM-7Boo7ZdT2vBl4EHfQmwGcFJvID0dWFRORHEvjSXKVl-l4avrimWdzYBVio3fOfDUWTv2dbbzZDht--sJ5LqjZC1ZaHL5TOOm7VdxrDXEAsvLOgXjtGwdDzVm_jQ=w701-h933-no"

body.appendChild(imags)

setTimeout(function(){
    let css=document.createElement("link")
    css.rel="stylesheet"
    css.href="style/style.css"
    imags.style.width="20%"
    document.head.appendChild(css)},4000)
    
let page=document.getElementsByClassName("list-item");
page[0].style.backgroundColor="orange",page[1].style.backgroundColor="orange",page[2].style.backgroundColor="orange"
page[0].style.color="white",page[1].style.color="white",page[2].style.color="white"
page[0].style.fontSize="20px",page[1].style.fontSize="20px",page[2].style.fontSize="20px"
page[0].style.fontWeight="bold",page[1].style.fontWeight="bold",page[2].style.fontWeight="bold"
page[0].style.textAlign="center",page[1].style.textAlign="center",page[2].style.textAlign="center"
page[0].style.textDecoration="underline",page[1].style.textDecoration="underline",page[2].style.textDecoration="underline"
