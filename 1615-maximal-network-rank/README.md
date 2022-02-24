<h2><a href="https://leetcode.com/problems/maximal-network-rank/">1615. Maximal Network Rank</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an infrastructure of <code style="user-select: auto;">n</code> cities with some number of <code style="user-select: auto;">roads</code> connecting these cities. Each <code style="user-select: auto;">roads[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that there is a bidirectional road between cities <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">network rank</strong><em style="user-select: auto;"> </em>of <strong style="user-select: auto;">two different cities</strong> is defined as the total number of&nbsp;<strong style="user-select: auto;">directly</strong> connected roads to <strong style="user-select: auto;">either</strong> city. If a road is directly connected to both cities, it is only counted <strong style="user-select: auto;">once</strong>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">maximal network rank </strong>of the infrastructure is the <strong style="user-select: auto;">maximum network rank</strong> of all pairs of different cities.</p>

<p style="user-select: auto;">Given the integer <code style="user-select: auto;">n</code> and the array <code style="user-select: auto;">roads</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">maximal network rank</strong> of the entire infrastructure</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/ex1.png" style="width: 292px; height: 172px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, roads = [[0,1],[0,3],[1,2],[1,3]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The network rank of cities 0 and 1 is 4 as there are 4 roads that are connected to either 0 or 1. The road between 0 and 1 is only counted once.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/ex2.png" style="width: 292px; height: 172px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, roads = [[0,1],[0,3],[1,2],[1,3],[2,3],[2,4]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> There are 5 roads that are connected to cities 1 or 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 8, roads = [[0,1],[1,2],[2,3],[2,4],[5,6],[5,7]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The network rank of 2 and 5 is 5. Notice that all the cities do not have to be connected.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= roads.length &lt;= n * (n - 1) / 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">roads[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>&nbsp;&lt;= n-1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub>&nbsp;!=&nbsp;b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">Each&nbsp;pair of cities has <strong style="user-select: auto;">at most one</strong> road connecting them.</li>
</ul>
</div>