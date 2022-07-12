<h2><a href="https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/">1855. Maximum Distance Between a Pair of Values</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">non-increasing 0-indexed </strong>integer arrays <code style="user-select: auto;">nums1</code>​​​​​​ and <code style="user-select: auto;">nums2</code>​​​​​​.</p>

<p style="user-select: auto;">A pair of indices <code style="user-select: auto;">(i, j)</code>, where <code style="user-select: auto;">0 &lt;= i &lt; nums1.length</code> and <code style="user-select: auto;">0 &lt;= j &lt; nums2.length</code>, is <strong style="user-select: auto;">valid</strong> if both <code style="user-select: auto;">i &lt;= j</code> and <code style="user-select: auto;">nums1[i] &lt;= nums2[j]</code>. The <strong style="user-select: auto;">distance</strong> of the pair is <code style="user-select: auto;">j - i</code>​​​​.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum distance</strong> of any <strong style="user-select: auto;">valid</strong> pair </em><code style="user-select: auto;">(i, j)</code><em style="user-select: auto;">. If there are no valid pairs, return </em><code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">An array <code style="user-select: auto;">arr</code> is <strong style="user-select: auto;">non-increasing</strong> if <code style="user-select: auto;">arr[i-1] &gt;= arr[i]</code> for every <code style="user-select: auto;">1 &lt;= i &lt; arr.length</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [55,30,5,4,2], nums2 = [100,20,10,10,5]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The valid pairs are (0,0), (2,2), (2,3), (2,4), (3,3), (3,4), and (4,4).
The maximum distance is 2 with pair (2,4).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [2,2,2], nums2 = [10,10,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The valid pairs are (0,0), (0,1), and (1,1).
The maximum distance is 1 with pair (0,1).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [30,29,19,5], nums2 = [25,25,25,25,25]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The valid pairs are (2,2), (2,3), (2,4), (3,3), and (3,4).
The maximum distance is 2 with pair (2,4).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">Both <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> are <strong style="user-select: auto;">non-increasing</strong>.</li>
</ul>
</div>