<h2><a href="https://leetcode.com/problems/can-place-flowers/">605. Can Place Flowers</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in <strong style="user-select: auto;">adjacent</strong> plots.</p>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">flowerbed</code> containing <code style="user-select: auto;">0</code>'s and <code style="user-select: auto;">1</code>'s, where <code style="user-select: auto;">0</code> means empty and <code style="user-select: auto;">1</code> means not empty, and an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">if</em> <code style="user-select: auto;">n</code> new flowers can be planted in the <code style="user-select: auto;">flowerbed</code> without violating the no-adjacent-flowers rule.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flowerbed = [1,0,0,0,1], n = 1
<strong style="user-select: auto;">Output:</strong> true
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> flowerbed = [1,0,0,0,1], n = 2
<strong style="user-select: auto;">Output:</strong> false
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= flowerbed.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">flowerbed[i]</code> is <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;">There are no two adjacent flowers in <code style="user-select: auto;">flowerbed</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= n &lt;= flowerbed.length</code></li>
</ul>
</div>