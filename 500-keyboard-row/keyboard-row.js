/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function (words) {
    const row1 = new Set("qwertyuiop");
    const row2 = new Set("asdfghjkl");
    const row3 = new Set("zxcvbnm");

    function canBeTypedWithOneRow(word) {
        const lowerWord = word.toLowerCase();
        const firstChar = lowerWord[0];

        let row;
        if (row1.has(firstChar)) {
            row = row1;
        }
        else if (row2.has(firstChar)) {
            row = row2;
        }
        else {
            row = row3;
        }

        for(let i = 1;i<lowerWord.length;i++){
            if(!row.has(lowerWord[i])){
                return false
            }
        }
        return true;   
    }

    return words.filter(canBeTypedWithOneRow);
};