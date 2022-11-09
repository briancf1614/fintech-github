function fixStart(text){
    let codingSplit = text.split("");
    for(let i=0;i<=codingSplit.length;i++){
    if(codingSplit[i]==codingSplit[0]){
        codingSplit[i]="a";
    }
}
console.log(codingSplit);
}
fixStart("babble");