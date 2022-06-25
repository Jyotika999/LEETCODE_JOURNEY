<h2><a href="https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/">1358. Number of Substrings Containing All Three Characters</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>&nbsp;consisting only of characters <em style="user-select: auto;">a</em>, <em style="user-select: auto;">b</em> and <em style="user-select: auto;">c</em>.</p>

<p style="user-select: auto;">Return the number of substrings containing <b style="user-select: auto;">at least</b>&nbsp;one occurrence of all these characters <em style="user-select: auto;">a</em>, <em style="user-select: auto;">b</em> and <em style="user-select: auto;">c</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcabc"
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em style="user-select: auto;">a</em>,&nbsp;<em style="user-select: auto;">b</em>&nbsp;and&nbsp;<em style="user-select: auto;">c are "</em>abc<em style="user-select: auto;">", "</em>abca<em style="user-select: auto;">", "</em>abcab<em style="user-select: auto;">", "</em>abcabc<em style="user-select: auto;">", "</em>bca<em style="user-select: auto;">", "</em>bcab<em style="user-select: auto;">", "</em>bcabc<em style="user-select: auto;">", "</em>cab<em style="user-select: auto;">", "</em>cabc<em style="user-select: auto;">" </em>and<em style="user-select: auto;"> "</em>abc<em style="user-select: auto;">" </em>(<strong style="user-select: auto;">again</strong>)<em style="user-select: auto;">. </em>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aaacb"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The substrings containing&nbsp;at least&nbsp;one occurrence of the characters&nbsp;<em style="user-select: auto;">a</em>,&nbsp;<em style="user-select: auto;">b</em>&nbsp;and&nbsp;<em style="user-select: auto;">c are "</em>aaacb<em style="user-select: auto;">", "</em>aacb<em style="user-select: auto;">" </em>and<em style="user-select: auto;"> "</em>acb<em style="user-select: auto;">".</em><em style="user-select: auto;"> </em>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abc"
<strong style="user-select: auto;">Output:</strong> 1
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= s.length &lt;= 5 x 10^4</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>&nbsp;only consists of&nbsp;<em style="user-select: auto;">a</em>, <em style="user-select: auto;">b</em> or <em style="user-select: auto;">c&nbsp;</em>characters.</li>
</ul>
</div>