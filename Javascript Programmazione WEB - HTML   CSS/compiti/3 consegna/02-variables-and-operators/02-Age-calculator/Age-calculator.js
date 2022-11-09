/*let year_of_birth,year_future;
year_of_birth=1998;
year_future=2045;
*/
function calculate_age(dob) { 
    var diff_ms = Date.now() - dob.getTime();
    var age_dt = new Date(diff_ms); 
  
    return Math.abs(age_dt.getUTCFullYear() - 1970);
}

console.log(calculate_age(new Date(1998, 11, 4)));

console.log(calculate_age(new Date(2000, 1, 1)));

