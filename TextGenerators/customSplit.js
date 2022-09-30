const mySplit = (str, separators) => {
    const result = [];
    let tempValue = '';

    for(let i = 0; i < str.length; i++){
        const el = str[i];
        if(separators.includes(el) || (separators === '' && tempValue)){
            result.push(tempValue);
            tempValue = '';
        }
        if(!separators.includes(el)){
            tempValue += el;
        }
    }
    if(tempValue){
        result.push(tempValue);
        tempValue = '';
    }
    return result;
};
const str = 'Hello, World';
console.log(mySplit(str, ['&', '$', ','])); // [ 'Hello', ' World' ]
const str2 = 'The&Cost&is$100';
console.log(mySplit(str2, ['&', '$', ','])); // [ 'The', 'Cost', 'is', '100' ]
