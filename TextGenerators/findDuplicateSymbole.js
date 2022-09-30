const findDuplicateCharsIndexes = (str, symbol) => {
    const metadata = {}
    for (let i = 0; i< str.length; ++ i){
        if (metadata[str[i]] && metadata[str[i]].key === symbol){
            metadata[str[i]].indexs.push(i)
            metadata[str[i]].hasDuplicate = true
        }else{
            metadata[str[i]] = {hasDuplicate: false, key: str[i], indexs: [i]}
        }
    }

    const duplicateIndexes = []

    for (let item in metadata ){
        if (metadata[item].hasDuplicate)  duplicateIndexes.push([...metadata[item].indexs]);
    }

    return duplicateIndexes
}
console.log(findDuplicateCharsIndexes("hello", "l"), 'result') // [2, 3]
