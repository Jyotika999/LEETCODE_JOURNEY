<h2><a href="https://leetcode.com/problems/possible-bipartition/">886. Possible Bipartition</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We want to split a group of <code style="user-select: auto;">n</code> people (labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>) into two groups of <strong style="user-select: auto;">any size</strong>. Each person may dislike some other people, and they should not go into the same group.</p>

<p style="user-select: auto;">Given the integer <code style="user-select: auto;">n</code> and the array <code style="user-select: auto;">dislikes</code> where <code style="user-select: auto;">dislikes[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that the person labeled <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> does not like the person labeled <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to split everyone into two groups in this way</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, dislikes = [[1,2],[1,3],[2,4]]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> group1 [1,4] and group2 [2,3].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, dislikes = [[1,2],[1,3],[2,3]]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, dislikes = [[1,2],[2,3],[3,4],[4,5],[1,5]]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= dislikes.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">dislikes[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= dislikes[i][j] &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> &lt; b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">All the pairs of <code style="user-select: auto;">dislikes</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>