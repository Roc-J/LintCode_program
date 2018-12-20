/*
计算一个整数阶乘后的尾数为0的个数
例如： 11! = 39916800, so the out should be 2
要求：O(logN)

解题思路：
求一个数的阶乘末尾0的个数，也就是要找到乘数中为10的个数，而10可分解为2和5
而我们知道2的数量又远大于5的个数，那么此题即便为找出5的个数。
仍需注意的一点就是，像25,125，这样的不只含有一个5的数字需要重新考虑进
*/

class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
		int res = 0;
		while(n) 
		{
			res += n/5；
			n = n/5;
		}
		return res;
    }
};