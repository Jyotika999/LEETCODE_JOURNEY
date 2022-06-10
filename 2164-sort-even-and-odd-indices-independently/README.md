<h2><a href="https://leetcode.com/problems/sort-even-and-odd-indices-independently/">2164. Sort Even and Odd Indices Independently</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>. Rearrange the values of <code style="user-select: auto;">nums</code> according to the following rules:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Sort the values at <strong style="user-select: auto;">odd indices</strong> of <code style="user-select: auto;">nums</code> in <strong style="user-select: auto;">non-increasing</strong> order.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, if <code style="user-select: auto;">nums = [4,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,2,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>]</code> before this step, it becomes <code style="user-select: auto;">[4,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,2,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>]</code> after. The values at odd indices <code style="user-select: auto;">1</code> and <code style="user-select: auto;">3</code> are sorted in non-increasing order.</li>
	</ul>
	</li>
	<li style="user-select: auto;">Sort the values at <strong style="user-select: auto;">even indices</strong> of <code style="user-select: auto;">nums</code> in <strong style="user-select: auto;">non-decreasing</strong> order.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, if <code style="user-select: auto;">nums = [<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,1,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,3]</code> before this step, it becomes <code style="user-select: auto;">[<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,1,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,3]</code> after. The values at even indices <code style="user-select: auto;">0</code> and <code style="user-select: auto;">2</code> are sorted in non-decreasing order.</li>
	</ul>
	</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the array formed after rearranging the values of</em> <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,1,2,3]
<strong style="user-select: auto;">Output:</strong> [2,3,4,1]
<strong style="user-select: auto;">Explanation:</strong> 
First, we sort the values present at odd indices (1 and 3) in non-increasing order.
So, nums changes from [4,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,2,<strong style="user-select: auto;"><u style="user-select: auto;">3</u></strong>] to [4,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,2,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>].
Next, we sort the values present at even indices (0 and 2) in non-decreasing order.
So, nums changes from [<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,1,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,3] to [<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,3,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,1].
Thus, the array formed after rearranging the values is [2,3,4,1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1]
<strong style="user-select: auto;">Output:</strong> [2,1]
<strong style="user-select: auto;">Explanation:</strong> 
Since there is exactly one odd index and one even index, no rearrangement of values takes place.
The resultant array formed is [2,1], which is the same as the initial array. 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>