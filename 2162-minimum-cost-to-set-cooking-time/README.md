<h2><a href="https://leetcode.com/problems/minimum-cost-to-set-cooking-time/">2162. Minimum Cost to Set Cooking Time</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A generic microwave supports cooking times for:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">at least <code style="user-select: auto;">1</code> second.</li>
	<li style="user-select: auto;">at most <code style="user-select: auto;">99</code> minutes and <code style="user-select: auto;">99</code> seconds.</li>
</ul>

<p style="user-select: auto;">To set the cooking time, you push <strong style="user-select: auto;">at most four digits</strong>. The microwave normalizes what you push as four digits by <strong style="user-select: auto;">prepending zeroes</strong>. It interprets the <strong style="user-select: auto;">first</strong> two digits as the minutes and the <strong style="user-select: auto;">last</strong> two digits as the seconds. It then <strong style="user-select: auto;">adds</strong> them up as the cooking time. For example,</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">You push <code style="user-select: auto;">9</code> <code style="user-select: auto;">5</code> <code style="user-select: auto;">4</code> (three digits). It is normalized as <code style="user-select: auto;">0954</code> and interpreted as <code style="user-select: auto;">9</code> minutes and <code style="user-select: auto;">54</code> seconds.</li>
	<li style="user-select: auto;">You push <code style="user-select: auto;">0</code> <code style="user-select: auto;">0</code> <code style="user-select: auto;">0</code> <code style="user-select: auto;">8</code> (four digits). It is interpreted as <code style="user-select: auto;">0</code> minutes and <code style="user-select: auto;">8</code> seconds.</li>
	<li style="user-select: auto;">You push <code style="user-select: auto;">8</code> <code style="user-select: auto;">0</code> <code style="user-select: auto;">9</code> <code style="user-select: auto;">0</code>. It is interpreted as <code style="user-select: auto;">80</code> minutes and <code style="user-select: auto;">90</code> seconds.</li>
	<li style="user-select: auto;">You push <code style="user-select: auto;">8</code> <code style="user-select: auto;">1</code> <code style="user-select: auto;">3</code> <code style="user-select: auto;">0</code>. It is interpreted as <code style="user-select: auto;">81</code> minutes and <code style="user-select: auto;">30</code> seconds.</li>
</ul>

<p style="user-select: auto;">You are given integers <code style="user-select: auto;">startAt</code>, <code style="user-select: auto;">moveCost</code>, <code style="user-select: auto;">pushCost</code>, and <code style="user-select: auto;">targetSeconds</code>. <strong style="user-select: auto;">Initially</strong>, your finger is on the digit <code style="user-select: auto;">startAt</code>. Moving the finger above <strong style="user-select: auto;">any specific digit</strong> costs <code style="user-select: auto;">moveCost</code> units of fatigue. Pushing the digit below the finger <strong style="user-select: auto;">once</strong> costs <code style="user-select: auto;">pushCost</code> units of fatigue.</p>

<p style="user-select: auto;">There can be multiple ways to set the microwave to cook for <code style="user-select: auto;">targetSeconds</code> seconds but you are interested in the way with the minimum cost.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum cost</strong> to set</em> <code style="user-select: auto;">targetSeconds</code> <em style="user-select: auto;">seconds of cooking time</em>.</p>

<p style="user-select: auto;">Remember that one minute consists of <code style="user-select: auto;">60</code> seconds.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/30/1.png" style="width: 506px; height: 210px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startAt = 1, moveCost = 2, pushCost = 1, targetSeconds = 600
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The following are the possible ways to set the cooking time.
- 1 0 0 0, interpreted as 10 minutes and 0 seconds.
&nbsp; The finger is already on digit 1, pushes 1 (with cost 1), moves to 0 (with cost 2), pushes 0 (with cost 1), pushes 0 (with cost 1), and pushes 0 (with cost 1).
&nbsp; The cost is: 1 + 2 + 1 + 1 + 1 = 6. This is the minimum cost.
- 0 9 6 0, interpreted as 9 minutes and 60 seconds. That is also 600 seconds.
&nbsp; The finger moves to 0 (with cost 2), pushes 0 (with cost 1), moves to 9 (with cost 2), pushes 9 (with cost 1), moves to 6 (with cost 2), pushes 6 (with cost 1), moves to 0 (with cost 2), and pushes 0 (with cost 1).
&nbsp; The cost is: 2 + 1 + 2 + 1 + 2 + 1 + 2 + 1 = 12.
- 9 6 0, normalized as 0960 and interpreted as 9 minutes and 60 seconds.
&nbsp; The finger moves to 9 (with cost 2), pushes 9 (with cost 1), moves to 6 (with cost 2), pushes 6 (with cost 1), moves to 0 (with cost 2), and pushes 0 (with cost 1).
&nbsp; The cost is: 2 + 1 + 2 + 1 + 2 + 1 = 9.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/30/2.png" style="width: 505px; height: 73px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startAt = 0, moveCost = 1, pushCost = 2, targetSeconds = 76
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The optimal way is to push two digits: 7 6, interpreted as 76 seconds.
The finger moves to 7 (with cost 1), pushes 7 (with cost 2), moves to 6 (with cost 1), and pushes 6 (with cost 2). The total cost is: 1 + 2 + 1 + 2 = 6
Note other possible ways are 0076, 076, 0116, and 116, but none of them produces the minimum cost.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= startAt &lt;= 9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= moveCost, pushCost &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= targetSeconds &lt;= 6039</code></li>
</ul>
</div>