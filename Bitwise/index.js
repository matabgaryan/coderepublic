//32 bit number representation
//['0','0','0','0','0'....'0','0','0','1']
function createBinaryString(nMask) {
    // nMask must be between -2147483648 and 2147483647
    if (nMask > 2**31-1)
        throw "number too large. number shouldn't be > 2**31-1"; //added
    if (nMask < -1*(2**31))
        throw "number too far negative, number shouldn't be < 2**31" //added
    for (let nFlag = 0, nShifted = nMask, sMask = ''; nFlag < 32;
         nFlag++, sMask += String(nShifted >>> 31), nShifted <<= 1);
    sMask=sMask.replace(/\B(?=(.{8})+(?!.))/g, " ") // added
    return sMask;
}

const getPosOfTwo = (pos) => {
    return 2**pos;
}

const setOfBit = (num, pos) => {
    let mask = getPosOfTwo(pos);
    mask = ~mask;
    // console.log(mask, 'mask')

    return num&mask;
}

const setOfBitWithShift = (num, pos) => {
    let mask = num << pos;
    let invertedMask = ~mask;
    console.log(createBinaryString(num));
    console.log(createBinaryString(mask));
    console.log(createBinaryString(invertedMask));
    console.log(createBinaryString(num&invertedMask))
    return num&invertedMask

}

const setOfBitWithShift2 = (num, pos, reset = false) => {
    let mask = 1<<pos;
    if(reset){
        num &=~mask
    }else{
        num |=mask
    }
    return num
}
console.log(setOfBitWithShift(15, 3))


const isUnique = (str) => {
    const aCharPosition = 97 // ASCII
    let table = 0; // 32 hat zero 0000000....00000
    for(let i = 0; i< str.length; ++i){
        let charPosition = str.charCodeAt(i) - aCharPosition;
        if (table &(1<<charPosition)){
            return false;
        }
        table |=(1<<charPosition)
    }
    return true
}
isUnique('hello') // false
isUnique('azat') // true

