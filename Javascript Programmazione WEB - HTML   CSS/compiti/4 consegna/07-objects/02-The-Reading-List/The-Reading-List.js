let descriptionOfBook=[{
    title: "La casa de las lagrimas",
    author: "enrique",
    alreadyRead: true,
},{
    title: "Viaje a las estrellas",
    author: "sebastian",
    alreadyRead: false,
},{
    title: "Los dias son mas cortos",
    author: "anonymous",
    alreadyRead: true,
}]

for(let i=0;i<descriptionOfBook.length;i++){
    if(descriptionOfBook[i].alreadyRead==true)
    console.log("You already read "+descriptionOfBook[i].title+" by "+descriptionOfBook[i].author);
    else
    console.log("You still need to read "+descriptionOfBook[i].title+" by "+descriptionOfBook[i].author);
}


