<h2>310. Minimum Height Trees</h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A tree is an undirected graph in which any two vertices are connected by&nbsp;<i style="user-select: auto;">exactly</i>&nbsp;one path. In other words, any connected graph without simple cycles is a tree.</p>

<p style="user-select: auto;">Given a tree of <code style="user-select: auto;">n</code> nodes&nbsp;labelled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>, and an array of&nbsp;<code style="user-select: auto;">n - 1</code>&nbsp;<code style="user-select: auto;">edges</code> where <code style="user-select: auto;">edges[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that there is an undirected edge between the two nodes&nbsp;<code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and&nbsp;<code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> in the tree,&nbsp;you can choose any node of the tree as the root. When you select a node <code style="user-select: auto;">x</code> as the root, the result tree has height <code style="user-select: auto;">h</code>. Among all possible rooted trees, those with minimum height (i.e. <code style="user-select: auto;">min(h)</code>)&nbsp; are called <strong style="user-select: auto;">minimum height trees</strong> (MHTs).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of all <strong style="user-select: auto;">MHTs'</strong> root labels</em>.&nbsp;You can return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">height</strong> of a rooted tree is the number of edges on the longest downward path between the root and a leaf.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/e1.jpg" style="width: 800px; height: 213px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, edges = [[1,0],[1,2],[1,3]]
<strong style="user-select: auto;">Output:</strong> [1]
<strong style="user-select: auto;">Explanation:</strong> As shown, the height of the tree is 1 when the root is the node with label 1 which is the only MHT.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/e2.jpg" style="width: 800px; height: 321px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, edges = [[3,0],[3,1],[3,2],[3,4],[5,4]]
<strong style="user-select: auto;">Output:</strong> [3,4]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, edges = []
<strong style="user-select: auto;">Output:</strong> [0]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 4:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, edges = [[0,1]]
<strong style="user-select: auto;">Output:</strong> [0,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">All the pairs <code style="user-select: auto;">(a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>)</code> are distinct.</li>
	<li style="user-select: auto;">The given input is <strong style="user-select: auto;">guaranteed</strong> to be a tree and there will be <strong style="user-select: auto;">no repeated</strong> edges.</li>
</ul>
</div>