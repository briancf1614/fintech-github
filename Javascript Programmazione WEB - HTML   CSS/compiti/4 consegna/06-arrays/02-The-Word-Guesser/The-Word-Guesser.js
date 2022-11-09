let word = ["P","n","e","u","m","o","n","o","u","l","t","r","a","m","i","c","r","o","s","c","o","p","i","c","s","i","l","i","c","o","v","o","l","c","a","n","o","c","o","n","i","o","s","i","s"];
let guess=["_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_",];
function guessLetter(letter) {
    for (let i = 0; i < word.length; i++) {
        if(word[i]==letter)
        guess[i]=letter;
        ;
    }
}

guessLetter("c");
guessLetter("p");
guessLetter("s");
guessLetter("o");
guessLetter("i");
guessLetter("m");

console.log(guess.join(","));