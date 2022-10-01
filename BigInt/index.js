const addZeros = (num, totalLength) => {
    if (num.length < 3) {
        return String(num).padStart(totalLength, '0')
    }
    return num
}

const splitNumber = (num) => {
    if (num === null || num.length <= 6) {
        return num.split();
    }
    const reversedNum = num.split("").reverse();
    const result = reversedNum.map((digit, index) =>
        index !== 0 && index % 3 === 0 ? `${digit},` : digit
    ).reverse().join("").split(/\s*,\s*/);
    if (result[0].length < 3) {
        const totalLength = 3
        result[0] = addZeros(result[0], totalLength)
    }
    return result
}

const bigInt = (num1, num2, accumulator) => {
    if (num1.length > num2.length) {
        const dif = num1.length - num2.length;
        for (let i = 0; i < dif; ++i) {
            num2 = '0' + num2;
        }
    }
    if (num1.length < num2.length) {
        const dif = num2.length - num1.length;
        for (let i = 0; i < dif; ++i) {
            num1 = '0' + num1;
        }
    }

    const num1Arr = splitNumber(num1);
    const num2Arr = splitNumber(num2);
    return num1Arr.map(function (num, idx) {
        return accumulator(Number(num), Number(num2Arr[idx]));
    });
}


console.log(bigInt('111', '111', (a, b) => {
    return a + b
}));
console.log(bigInt('111', '111', (a, b) => {
    return a * b
}));
console.log(bigInt('111', '111', (a, b) => {
    return a - b
}));
