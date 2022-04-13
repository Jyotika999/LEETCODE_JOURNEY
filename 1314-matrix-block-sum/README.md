<h2><a href="https://leetcode.com/problems/matrix-block-sum/">1314. Matrix Block Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">mat</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">a matrix</em> <code style="user-select: auto;">answer</code> <em style="user-select: auto;">where each</em> <code style="user-select: auto;">answer[i][j]</code> <em style="user-select: auto;">is the sum of all elements</em> <code style="user-select: auto;">mat[r][c]</code> <em style="user-select: auto;">for</em>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">i - k &lt;= r &lt;= i + k,</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">j - k &lt;= c &lt;= j + k</code>, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">(r, c)</code> is a valid position in the matrix.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[1,2,3],[4,5,6],[7,8,9]], k = 1
<strong style="user-select: auto;">Output:</strong> [[12,21,16],[27,45,33],[24,39,28]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[1,2,3],[4,5,6],[7,8,9]], k = 2
<strong style="user-select: auto;">Output:</strong> [[45,45,45],[45,45,45],[45,45,45]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m ==&nbsp;mat.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n ==&nbsp;mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n, k &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= mat[i][j] &lt;= 100</code></li>
</ul>
</div>