<h2><a href="https://leetcode.com/problems/get-equal-substrings-within-budget/">1208. Get Equal Substrings Within Budget</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> of the same length and an integer <code style="user-select: auto;">maxCost</code>.</p>

<p style="user-select: auto;">You want to change <code style="user-select: auto;">s</code> to <code style="user-select: auto;">t</code>. Changing the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> character of <code style="user-select: auto;">s</code> to <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> character of <code style="user-select: auto;">t</code> costs <code style="user-select: auto;">|s[i] - t[i]|</code> (i.e., the absolute difference between the ASCII values of the characters).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum length of a substring of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> that can be changed to be the same as the corresponding substring of </em><code style="user-select: auto;">t</code><em style="user-select: auto;"> with a cost less than or equal to </em><code style="user-select: auto;">maxCost</code>. If there is no substring from <code style="user-select: auto;">s</code> that can be changed to its corresponding substring from <code style="user-select: auto;">t</code>, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd", t = "bcdf", maxCost = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> "abc" of s can change to "bcd".
That costs 3, so the maximum length is 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd", t = "cdef", maxCost = 3
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Each character in s costs 2 to change to character in t,  so the maximum length is 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd", t = "acde", maxCost = 0
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> You cannot make any change, so the maximum length is 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">t.length == s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= maxCost &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of only lowercase English letters.</li>
</ul>
</div>