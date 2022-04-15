<h2><a href="https://leetcode.com/problems/maximal-square/">221. Maximal Square</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an <code style="user-select: auto;">m x n</code> binary <code style="user-select: auto;">matrix</code> filled with <code style="user-select: auto;">0</code>'s and <code style="user-select: auto;">1</code>'s, <em style="user-select: auto;">find the largest square containing only</em> <code style="user-select: auto;">1</code>'s <em style="user-select: auto;">and return its area</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max1grid.jpg" style="width: 400px; height: 319px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max2grid.jpg" style="width: 165px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [["0","1"],["1","0"]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [["0"]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == matrix.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == matrix[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">matrix[i][j]</code> is <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>