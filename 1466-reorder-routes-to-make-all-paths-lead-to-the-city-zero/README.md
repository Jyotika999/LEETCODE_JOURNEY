<h2><a href="https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/">1466. Reorder Routes to Make All Paths Lead to the City Zero</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> cities numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> and <code style="user-select: auto;">n - 1</code> roads such that there is only one way to travel between two different cities (this network form a tree). Last year, The ministry of transport decided to orient the roads in one direction because they are too narrow.</p>

<p style="user-select: auto;">Roads are represented by <code style="user-select: auto;">connections</code> where <code style="user-select: auto;">connections[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> represents a road from city <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> to city <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">This year, there will be a big event in the capital (city <code style="user-select: auto;">0</code>), and many people want to travel to this city.</p>

<p style="user-select: auto;">Your task consists of reorienting some roads such that each city can visit the city <code style="user-select: auto;">0</code>. Return the <strong style="user-select: auto;">minimum</strong> number of edges changed.</p>

<p style="user-select: auto;">It's <strong style="user-select: auto;">guaranteed</strong> that each city can reach city <code style="user-select: auto;">0</code> after reorder.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/13/sample_1_1819.png" style="width: 311px; height: 189px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>Change the direction of edges show in red such that each node can reach the node 0 (capital).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/05/13/sample_2_1819.png" style="width: 509px; height: 79px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation: </strong>Change the direction of edges show in red such that each node can reach the node 0 (capital).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, connections = [[1,0],[2,0]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">connections.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">connections[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
</ul>
</div>