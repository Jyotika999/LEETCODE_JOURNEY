<h2><a href="https://leetcode.com/problems/regions-cut-by-slashes/">959. Regions Cut By Slashes</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An <code style="user-select: auto;">n x n</code> grid is composed of <code style="user-select: auto;">1 x 1</code> squares where each <code style="user-select: auto;">1 x 1</code> square consists of a <code style="user-select: auto;">'/'</code>, <code style="user-select: auto;">'\'</code>, or blank space <code style="user-select: auto;">' '</code>. These characters divide the square into contiguous regions.</p>

<p style="user-select: auto;">Given the grid <code style="user-select: auto;">grid</code> represented as a string array, return <em style="user-select: auto;">the number of regions</em>.</p>

<p style="user-select: auto;">Note that backslash characters are escaped, so a <code style="user-select: auto;">'\'</code> is represented as <code style="user-select: auto;">'\\'</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/15/1.png" style="width: 200px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [" /","/ "]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/15/2.png" style="width: 200px; height: 198px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [" /","  "]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/15/4.png" style="width: 200px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = ["/\\","\\/"]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation: </strong>Recall that because \ characters are escaped, "\\/" refers to \/, and "/\\" refers to /\.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">'/'</code>, <code style="user-select: auto;">'\'</code>, or <code style="user-select: auto;">' '</code>.</li>
</ul>
</div>