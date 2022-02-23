<h2><a href="https://leetcode.com/problems/loud-and-rich/">851. Loud and Rich</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a group of <code style="user-select: auto;">n</code> people labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> where each person has a different amount of money and a different level of quietness.</p>

<p style="user-select: auto;">You are given an array <code style="user-select: auto;">richer</code> where <code style="user-select: auto;">richer[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> has more money than <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> and an integer array <code style="user-select: auto;">quiet</code> where <code style="user-select: auto;">quiet[i]</code> is the quietness of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person. All the given data in richer are <strong style="user-select: auto;">logically correct</strong> (i.e., the data will not lead you to a situation where <code style="user-select: auto;">x</code> is richer than <code style="user-select: auto;">y</code> and <code style="user-select: auto;">y</code> is richer than <code style="user-select: auto;">x</code> at the same time).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">answer[x] = y</code><em style="user-select: auto;"> if </em><code style="user-select: auto;">y</code><em style="user-select: auto;"> is the least quiet person (that is, the person </em><code style="user-select: auto;">y</code><em style="user-select: auto;"> with the smallest value of </em><code style="user-select: auto;">quiet[y]</code><em style="user-select: auto;">) among all people who definitely have equal to or more money than the person </em><code style="user-select: auto;">x</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> richer = [[1,0],[2,1],[3,1],[3,7],[4,3],[5,3],[6,3]], quiet = [3,2,5,4,6,1,7,0]
<strong style="user-select: auto;">Output:</strong> [5,5,2,5,4,5,6,7]
<strong style="user-select: auto;">Explanation:</strong> 
answer[0] = 5.
Person 5 has more money than 3, which has more money than 1, which has more money than 0.
The only person who is quieter (has lower quiet[x]) is person 7, but it is not clear if they have more money than person 0.
answer[7] = 7.
Among all people that definitely have equal to or more money than person 7 (which could be persons 3, 4, 5, 6, or 7), the person who is the quietest (has lower quiet[x]) is person 7.
The other answers can be filled out with similar reasoning.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> richer = [], quiet = [0]
<strong style="user-select: auto;">Output:</strong> [0]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == quiet.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= quiet[i] &lt; n</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">quiet</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= richer.length &lt;= n * (n - 1) / 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i </sub>!= b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">All the pairs of <code style="user-select: auto;">richer</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">The observations in <code style="user-select: auto;">richer</code> are all logically consistent.</li>
</ul>
</div>