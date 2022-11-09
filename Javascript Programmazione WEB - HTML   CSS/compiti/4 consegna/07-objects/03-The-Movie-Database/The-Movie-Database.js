let informationOfMovie=[{
    title: "La casa de las lagrimas",
    stars: ["Lonnie Perez","Sarah Hull","Daniel Hernandez","Shawn Mejia","Michelle Dunn","Samantha Jones","Renee Hoffman","Daniel Davis","William Harris","Richard Hardy"],
    duration: 150,
},{ title: "La casa embrujada",
    stars: ["Judith Bailey","Donna Martin","Jason Robinson","Marissa Hunter","Brent Richmond","Michelle Thompson","Jeremy Tran","Carrie Wilkinson","Robert Smith","Steve Jacobs"],
    duration: 140,
},{ title: "Los muertos no caminan",
    stars: ["Amy Castillo","Sarah Bradley","Brandi Pearson","Dylan Bruce","Patrick Terry","Tamara Rodriguez","Sally Jackson","Justin Kelly","Colin Ramos","Brian Russell"],
    duration: 160,
},{ title: "Moon house",
    stars: ["Mia Santiago","Samantha Jones","Daniel Brown","Mandy Nguyen","Karen Miller","Felicia Jackson","Desiree Singleton","Kristen Vaughan","Scott Fletcher","Sharon Castro"],
    duration: 170,
},
]
function movies(movie){
    for(let i=0;i<4;i++)
    {
    console.log(movie[i].title+" lasts for "+movie[i].duration+" minutes. Stars: "+movie[i].stars);
    }
}
movies(informationOfMovie);