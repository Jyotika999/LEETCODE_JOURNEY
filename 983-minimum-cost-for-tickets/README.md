<h2><a href="https://leetcode.com/problems/minimum-cost-for-tickets/">983. Minimum Cost For Tickets</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array <code style="user-select: auto;">days</code>. Each day is an integer from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">365</code>.</p>

<p style="user-select: auto;">Train tickets are sold in <strong style="user-select: auto;">three different ways</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">a <strong style="user-select: auto;">1-day</strong> pass is sold for <code style="user-select: auto;">costs[0]</code> dollars,</li>
	<li style="user-select: auto;">a <strong style="user-select: auto;">7-day</strong> pass is sold for <code style="user-select: auto;">costs[1]</code> dollars, and</li>
	<li style="user-select: auto;">a <strong style="user-select: auto;">30-day</strong> pass is sold for <code style="user-select: auto;">costs[2]</code> dollars.</li>
</ul>

<p style="user-select: auto;">The passes allow that many days of consecutive travel.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if we get a <strong style="user-select: auto;">7-day</strong> pass on day <code style="user-select: auto;">2</code>, then we can travel for <code style="user-select: auto;">7</code> days: <code style="user-select: auto;">2</code>, <code style="user-select: auto;">3</code>, <code style="user-select: auto;">4</code>, <code style="user-select: auto;">5</code>, <code style="user-select: auto;">6</code>, <code style="user-select: auto;">7</code>, and <code style="user-select: auto;">8</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of dollars you need to travel every day in the given list of days</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> days = [1,4,6,7,8,20], costs = [2,7,15]
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
In total, you spent $11 and covered all the days of your travel.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]
<strong style="user-select: auto;">Output:</strong> 17
<strong style="user-select: auto;">Explanation:</strong> For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.
On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.
In total, you spent $17 and covered all the days of your travel.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= days.length &lt;= 365</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= days[i] &lt;= 365</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">days</code> is in strictly increasing order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">costs.length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= costs[i] &lt;= 1000</code></li>
</ul>
</div>