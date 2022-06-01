<h2><a href="https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/">1502. Can Make Arithmetic Progression From Sequence</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A sequence of numbers is called an <strong style="user-select: auto;">arithmetic progression</strong> if the difference between any two consecutive elements is the same.</p>

<p style="user-select: auto;">Given an array of numbers <code style="user-select: auto;">arr</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if the array can be rearranged to form an <strong style="user-select: auto;">arithmetic progression</strong>. Otherwise, return</em> <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,5,1]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,4]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>There is no way to reorder the elements to obtain an arithmetic progression.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= arr.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">6</sup> &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>