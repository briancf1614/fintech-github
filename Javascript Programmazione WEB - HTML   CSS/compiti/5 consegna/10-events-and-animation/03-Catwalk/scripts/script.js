function catwalk() {
  var cat = document.getElementsByTagName('img')[0];
  var catWalk = 0;
  var catWalkInterval = setInterval(function() {
    catWalk += 5;
    cat.style.left = catWalk + 'px';
    if (catWalk > window.innerWidth) {
      clearInterval(catWalkInterval);
    }
  }, 10);
}
catwalk();

