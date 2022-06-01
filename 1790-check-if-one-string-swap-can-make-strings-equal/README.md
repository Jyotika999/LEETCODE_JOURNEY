<h2><a href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/">1790. Check if One String Swap Can Make Strings Equal</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings <code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code> of equal length. A <strong style="user-select: auto;">string swap</strong> is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to make both strings equal by performing <strong style="user-select: auto;">at most one string swap </strong>on <strong style="user-select: auto;">exactly one</strong> of the strings. </em>Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "bank", s2 = "kanb"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> For example, swap the first character with the last character of s2 to make "bank".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "attack", s2 = "defend"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> It is impossible to make them equal with one string swap.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "kelb", s2 = "kelb"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The two strings are already equal, so no string swap operation is required.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s1.length, s2.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s1.length == s2.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code> consist of only lowercase English letters.</li>
</ul>
</div>