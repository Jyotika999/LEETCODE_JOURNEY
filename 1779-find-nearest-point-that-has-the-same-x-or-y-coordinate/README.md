<h2><a href="https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/">1779. Find Nearest Point That Has the Same X or Y Coordinate</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integers, <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code>, which represent your current location on a Cartesian grid: <code style="user-select: auto;">(x, y)</code>. You are also given an array <code style="user-select: auto;">points</code> where each <code style="user-select: auto;">points[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> represents that a point exists at <code style="user-select: auto;">(a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>)</code>. A point is <strong style="user-select: auto;">valid</strong> if it shares the same x-coordinate or the same y-coordinate as your location.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the index <strong style="user-select: auto;">(0-indexed)</strong> of the <strong style="user-select: auto;">valid</strong> point with the smallest <strong style="user-select: auto;">Manhattan distance</strong> from your current location</em>. If there are multiple, return <em style="user-select: auto;">the valid point with the <strong style="user-select: auto;">smallest</strong> index</em>. If there are no valid points, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">Manhattan distance</strong> between two points <code style="user-select: auto;">(x<sub style="user-select: auto;">1</sub>, y<sub style="user-select: auto;">1</sub>)</code> and <code style="user-select: auto;">(x<sub style="user-select: auto;">2</sub>, y<sub style="user-select: auto;">2</sub>)</code> is <code style="user-select: auto;">abs(x<sub style="user-select: auto;">1</sub> - x<sub style="user-select: auto;">2</sub>) + abs(y<sub style="user-select: auto;">1</sub> - y<sub style="user-select: auto;">2</sub>)</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> x = 3, y = 4, points = [[1,2],[3,1],[2,4],[2,3],[4,4]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Of all the points, only [3,1], [2,4] and [4,4] are valid. Of the valid points, [2,4] and [4,4] have the smallest Manhattan distance from your current location, with a distance of 1. [2,4] has the smallest index, so return 2.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> x = 3, y = 4, points = [[3,4]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The answer is allowed to be on the same location as your current location.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> x = 3, y = 4, points = [[2,3]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There are no valid points.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= points.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x, y, a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>