<h2><a href="https://leetcode.com/problems/find-duplicate-subtrees/">652. Find Duplicate Subtrees</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code>&nbsp;of a binary tree, return all <strong style="user-select: auto;">duplicate subtrees</strong>.</p>

<p style="user-select: auto;">For each kind of duplicate subtrees, you only need to return the root node of any <b style="user-select: auto;">one</b> of them.</p>

<p style="user-select: auto;">Two trees are <strong style="user-select: auto;">duplicate</strong> if they have the <strong style="user-select: auto;">same structure</strong> with the <strong style="user-select: auto;">same node values</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/16/e1.jpg" style="width: 450px; height: 354px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,4,null,2,4,null,null,4]
<strong style="user-select: auto;">Output:</strong> [[2,4],[4]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/16/e2.jpg" style="width: 321px; height: 201px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [2,1,1]
<strong style="user-select: auto;">Output:</strong> [[1]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/16/e33.jpg" style="width: 450px; height: 303px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [2,2,2,3,null,3,null]
<strong style="user-select: auto;">Output:</strong> [[2,3],[3]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of the nodes in the tree will be in the range <code style="user-select: auto;">[1, 10^4]</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-200 &lt;= Node.val &lt;= 200</code></li>
</ul>
</div>