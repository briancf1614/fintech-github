let body=document.body;


let story=document.createElement("div");
story.classList.add("story");
body.appendChild(story);

button=document.querySelector("#gen-button");
button.addEventListener("click",function(){
    let noun=document.querySelector("#noun").value;
    let adjective=document.querySelector("#adjective").value;
    let name=document.querySelector("#person").value;
    let paragraph=document.createElement("p");
    paragraph.innerHTML=`${name} is a ${adjective} ${noun}`;
    story.appendChild(paragraph);
})

