<h2><a href="https://leetcode.com/problems/number-of-good-ways-to-split-a-string/">1525. Number of Good Ways to Split a String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">A split is called <strong style="user-select: auto;">good</strong> if you can split <code style="user-select: auto;">s</code> into two non-empty strings <code style="user-select: auto;">s<sub style="user-select: auto;">left</sub></code> and <code style="user-select: auto;">s<sub style="user-select: auto;">right</sub></code> where their concatenation is equal to <code style="user-select: auto;">s</code> (i.e., <code style="user-select: auto;">s<sub style="user-select: auto;">left</sub> + s<sub style="user-select: auto;">right</sub> = s</code>) and the number of distinct letters in <code style="user-select: auto;">s<sub style="user-select: auto;">left</sub></code> and <code style="user-select: auto;">s<sub style="user-select: auto;">right</sub></code> is the same.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of <strong style="user-select: auto;">good splits</strong> you can make in <code style="user-select: auto;">s</code></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aacaba"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There are 5 ways to split <code style="user-select: auto;">"aacaba"</code> and 2 of them are good. 
("a", "acaba") Left string and right string contains 1 and 3 different letters respectively.
("aa", "caba") Left string and right string contains 1 and 3 different letters respectively.
("aac", "aba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aaca", "ba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aacab", "a") Left string and right string contains 3 and 1 different letters respectively.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Split the string as follows ("ab", "cd").
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only lowercase English letters.</li>
</ul>
</div>