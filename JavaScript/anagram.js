function areAnagrams(str1, str2) {
    // Remove any non-alphanumeric characters and convert strings to lowercase
    const normalizedStr1 = str1.replace(/[^\w]/g, '').toLowerCase();
    const normalizedStr2 = str2.replace(/[^\w]/g, '').toLowerCase();
    
    // Sort the characters of the strings and join them back into a string
    const sortedStr1 = normalizedStr1.split('').sort().join('');
    const sortedStr2 = normalizedStr2.split('').sort().join('');
    
    // Compare the sorted strings
    return sortedStr1 === sortedStr2;
}

// Test the function
console.log(areAnagrams("listen", "silent")); // true
console.log(areAnagrams("hello", "world"));   // false
console.log(areAnagrams("Dormitory", "Dirty room")); // true
