var intToRoman = function(num) {
 
let ones = ['', 'I', 'II', 'III', 'IV', 'V', 'VI', 'VII', 'VIII', 'IX', 'X'];
let tens = ['', 'X', 'XX', 'XXX', 'XL', 'L', 'LX', 'LXX', 'LXXX', 'XC', 'C' ];
let hundereds = ['', 'C', 'CC', 'CCC', 'CD', 'D', 'DC', 'DCC', 'DCCC', 'CM', 'M'];
let thousands = ['', 'M', 'MM', 'MMM']
 
let i = 1;
let romanNumeral = '';
while(num) {
    let digit = num % 10;
    if(i === 1) {
        romanNumeral = ones[digit] + romanNumeral;
    }
    if( i === 2) {
        romanNumeral = tens[digit] + romanNumeral;
    }
    if(i === 3) {
        romanNumeral = hundereds[digit] + romanNumeral;
    }
    if(i === 4) {
        romanNumeral = thousands[digit] + romanNumeral;
    }
    i++;
    num = Math.floor(num / 10);
}
return romanNumeral;
};
 
// n % 10 -> returns right most digit
// Math.floor(n / 10) -> removes the right most digit

