<h2><a href="https://leetcode.com/problems/satisfiability-of-equality-equations/">990. Satisfiability of Equality Equations</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">equations</code> that represent relationships between variables where each string <code style="user-select: auto;">equations[i]</code> is of length <code style="user-select: auto;">4</code> and takes one of two different forms: <code style="user-select: auto;">"x<sub style="user-select: auto;">i</sub>==y<sub style="user-select: auto;">i</sub>"</code> or <code style="user-select: auto;">"x<sub style="user-select: auto;">i</sub>!=y<sub style="user-select: auto;">i</sub>"</code>.Here, <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">y<sub style="user-select: auto;">i</sub></code> are lowercase letters (not necessarily different) that represent one-letter variable names.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if it is possible to assign integers to variable names so as to satisfy all the given equations, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> equations = ["a==b","b!=a"]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> If we assign say, a = 1 and b = 1, then the first equation is satisfied, but not the second.
There is no way to assign the variables to satisfy both equations.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> equations = ["b==a","a==b"]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> We could assign a = 1 and b = 1 to satisfy both equations.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= equations.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i].length == 4</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i][0]</code> is a lowercase letter.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i][1]</code> is either <code style="user-select: auto;">'='</code> or <code style="user-select: auto;">'!'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i][2]</code> is <code style="user-select: auto;">'='</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i][3]</code> is a lowercase letter.</li>
</ul>
</div>