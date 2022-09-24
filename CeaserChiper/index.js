const FIRST_LETTER_ASCII_NUM = 65; // A
const MID_LETTER_ASCII_NUM = 77; // M
const MID_NEXT_LETTER_ASCII_NUM = 78; // N
const LAST_LETTER_ASCII_NUM = 90; // Z

function caesarsCipher(str, shift) {
    let result = "";
    for (let i = 0; i < str.length; ++i){
        let letter = str[i].toUpperCase();
        const letterAsciiNum = letter.charCodeAt();
        const isLetterInLeftSide = (letterAsciiNum > FIRST_LETTER_ASCII_NUM && letterAsciiNum <= MID_LETTER_ASCII_NUM);
        const isLetterInRightSide = (letterAsciiNum > MID_NEXT_LETTER_ASCII_NUM && letterAsciiNum <= LAST_LETTER_ASCII_NUM);

        if (isLetterInLeftSide){
            result += String.fromCharCode(letterAsciiNum + shift);
        }else if (isLetterInRightSide){
            result += String.fromCharCode(letterAsciiNum - shift)
        }else {
            result += letter
        }
    }
    return  result;
}
console.log(caesarsCipher("URYYB JBEYQ", 13)) // HELLO WORLD
console.log(caesarsCipher("HELLO WORLD", 13)) // URYYB JBEYQ
