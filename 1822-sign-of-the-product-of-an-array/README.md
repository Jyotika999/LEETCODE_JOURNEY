<h2><a href="https://leetcode.com/problems/sign-of-the-product-of-an-array/">1822. Sign of the Product of an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a function <code style="user-select: auto;">signFunc(x)</code> that returns:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1</code> if <code style="user-select: auto;">x</code> is positive.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1</code> if <code style="user-select: auto;">x</code> is negative.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0</code> if <code style="user-select: auto;">x</code> is equal to <code style="user-select: auto;">0</code>.</li>
</ul>

<p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>. Let <code style="user-select: auto;">product</code> be the product of all values in the array <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">signFunc(product)</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,-2,-3,-4,3,2,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The product of all values in the array is 144, and signFunc(144) = 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,0,2,-3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The product of all values in the array is 0, and signFunc(0) = 0
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,1,-1,1,-1]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> The product of all values in the array is -1, and signFunc(-1) = -1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>