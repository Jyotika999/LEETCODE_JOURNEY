<h2>23. Merge k Sorted Lists</h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">k</code> linked-lists <code style="user-select: auto;">lists</code>, each linked-list is sorted in ascending order.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Merge all the linked-lists into one sorted linked-list and return it.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lists = [[1,4,5],[1,3,4],[2,6]]
<strong style="user-select: auto;">Output:</strong> [1,1,2,3,4,4,5,6]
<strong style="user-select: auto;">Explanation:</strong> The linked-lists are:
[
  1-&gt;4-&gt;5,
  1-&gt;3-&gt;4,
  2-&gt;6
]
merging them into one sorted list:
1-&gt;1-&gt;2-&gt;3-&gt;4-&gt;4-&gt;5-&gt;6
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lists = []
<strong style="user-select: auto;">Output:</strong> []
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lists = [[]]
<strong style="user-select: auto;">Output:</strong> []
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">k == lists.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 10^4</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= lists[i].length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10^4 &lt;= lists[i][j] &lt;= 10^4</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">lists[i]</code> is sorted in <strong style="user-select: auto;">ascending order</strong>.</li>
	<li style="user-select: auto;">The sum of <code style="user-select: auto;">lists[i].length</code> won't exceed <code style="user-select: auto;">10^4</code>.</li>
</ul>
</div>