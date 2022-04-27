<h2><a href="https://leetcode.com/problems/delete-columns-to-make-sorted-iii/">960. Delete Columns to Make Sorted III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">n</code> strings <code style="user-select: auto;">strs</code>, all of the same length.</p>

<p style="user-select: auto;">We may choose any deletion indices, and we delete all the characters in those indices for each string.</p>

<p style="user-select: auto;">For example, if we have <code style="user-select: auto;">strs = ["abcdef","uvwxyz"]</code> and deletion indices <code style="user-select: auto;">{0, 2, 3}</code>, then the final array after deletions is <code style="user-select: auto;">["bef", "vyz"]</code>.</p>

<p style="user-select: auto;">Suppose we chose a set of deletion indices <code style="user-select: auto;">answer</code> such that after deletions, the final array has <strong style="user-select: auto;">every string (row) in lexicographic</strong> order. (i.e., <code style="user-select: auto;">(strs[0][0] &lt;= strs[0][1] &lt;= ... &lt;= strs[0][strs[0].length - 1])</code>, and <code style="user-select: auto;">(strs[1][0] &lt;= strs[1][1] &lt;= ... &lt;= strs[1][strs[1].length - 1])</code>, and so on). Return <em style="user-select: auto;">the minimum possible value of</em> <code style="user-select: auto;">answer.length</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> strs = ["babca","bbazb"]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> After deleting columns 0, 1, and 4, the final array is strs = ["bc", "az"].
Both these rows are individually in lexicographic order (ie. strs[0][0] &lt;= strs[0][1] and strs[1][0] &lt;= strs[1][1]).
Note that strs[0] &gt; strs[1] - the array strs is not necessarily in lexicographic order.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> strs = ["edcba"]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> If we delete less than 4 columns, the only row will not be lexicographically sorted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> strs = ["ghi","def","abc"]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> All rows are already lexicographically sorted.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == strs.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= strs[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">strs[i]</code> consists of lowercase English letters.</li>
</ul>

<ul style="user-select: auto;">
	<li style="user-select: auto;">&nbsp;</li>
</ul>
</div>