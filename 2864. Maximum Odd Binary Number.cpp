// 2864. Maximum Odd Binary Number
// Solution:

// CODE:

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    const int zeros = ranges::count(s, '0');
    const int ones = s.length() - zeros;
    return string(ones - 1, '1') + string(zeros, '0') + '1';
    }
};

// class Solution {
// public:
//     string maximumOddBinaryNumber(string s) {
//         // Count the number of '0's in the string
//         const int zeros = ranges::count(s, '0');

//         // Calculate the number of '1's in the string
//         const int ones = s.length() - zeros;

//         // Form the maximum odd binary number
//         // We need (ones - 1) '1's followed by '0's and then another '1'
//         return string(ones - 1, '1') + string(zeros, '0') + '1';
//     }
// };
