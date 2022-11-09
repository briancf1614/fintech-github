function reverse(word){
    let drow=word.split("").reverse().join("")
    console.log(drow);
    if(word==drow){
        Boolean=true;
    }else{Boolean=false;}
    return Boolean;
}
reverse("madam")
