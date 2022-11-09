var topChoice =[[]];
var i=0;
function topChoices(color,animal,books,me){
    topChoice[i]=[color,animal,books,me];
    i++;
}
topChoices('Black','Dog','Comics','Videogames');
topChoices('Red','cat','story','programation');
topChoices('Blue','hamster','science','walk');

console.log('This is my first favorit color '+ topChoice[0][0]);
console.log('This is my second favorit color '+ topChoice[1][0]);
console.log('This is my third favorit color '+ topChoice[2][0]);
