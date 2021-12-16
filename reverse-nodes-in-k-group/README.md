<h2>25. Reverse Nodes in k-Group</h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a linked list, reverse the nodes of a linked list <em style="user-select: auto;">k</em> at a time and return its modified list.</p>

<p style="user-select: auto;"><em style="user-select: auto;">k</em> is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of <em style="user-select: auto;">k</em> then left-out nodes, in the end, should remain as it is.</p>

<p style="user-select: auto;">You may&nbsp;not alter the values in the list's nodes, only nodes themselves may be changed.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg" style="width: 542px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5], k = 2
<strong style="user-select: auto;">Output:</strong> [2,1,4,3,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg" style="width: 542px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5], k = 3
<strong style="user-select: auto;">Output:</strong> [3,2,1,4,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5], k = 1
<strong style="user-select: auto;">Output:</strong> [1,2,3,4,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 4:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1], k = 1
<strong style="user-select: auto;">Output:</strong> [1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the list&nbsp;is in the range <code style="user-select: auto;">sz</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sz &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= sz</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow-up:</strong> Can you solve the problem in O(1) extra memory space?</div>