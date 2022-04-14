<h2><a href="https://leetcode.com/problems/number-of-ways-to-select-buildings/">2222. Number of Ways to Select Buildings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> binary string <code style="user-select: auto;">s</code> which represents the types of buildings along a street where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">s[i] = '0'</code> denotes that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> building is an office and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i] = '1'</code> denotes that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> building is a restaurant.</li>
</ul>

<p style="user-select: auto;">As a city official, you would like to <strong style="user-select: auto;">select</strong> 3 buildings for random inspection. However, to ensure variety, <strong style="user-select: auto;">no two consecutive</strong> buildings out of the <strong style="user-select: auto;">selected</strong> buildings can be of the same type.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, given <code style="user-select: auto;">s = "0<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>1<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>0<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>"</code>, we cannot select the <code style="user-select: auto;">1<sup style="user-select: auto;">st</sup></code>, <code style="user-select: auto;">3<sup style="user-select: auto;">rd</sup></code>, and <code style="user-select: auto;">5<sup style="user-select: auto;">th</sup></code> buildings as that would form <code style="user-select: auto;">"0<strong style="user-select: auto;"><u style="user-select: auto;">11</u></strong>"</code> which is <strong style="user-select: auto;">not</strong> allowed due to having two consecutive buildings of the same type.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <b style="user-select: auto;">number of valid ways</b> to select 3 buildings.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "001101"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> 
The following sets of indices selected are valid:
- [0,2,4] from "<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>0<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>1<strong style="user-select: auto;"><u style="user-select: auto;">0</u></strong>1" forms "010"
- [0,3,4] from "<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>01<u style="user-select: auto;"><strong style="user-select: auto;">10</strong></u>1" forms "010"
- [1,2,4] from "0<u style="user-select: auto;"><strong style="user-select: auto;">01</strong></u>1<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>1" forms "010"
- [1,3,4] from "0<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>1<u style="user-select: auto;"><strong style="user-select: auto;">10</strong></u>1" forms "010"
- [2,4,5] from "00<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>1<u style="user-select: auto;"><strong style="user-select: auto;">01</strong></u>" forms "101"
- [3,4,5] from "001<u style="user-select: auto;"><strong style="user-select: auto;">101</strong></u>" forms "101"
No other selection is valid. Thus, there are 6 total ways.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "11100"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> It can be shown that there are no valid selections.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>