<h2><a href="https://leetcode.com/problems/minimum-score-triangulation-of-polygon/">1039. Minimum Score Triangulation of Polygon</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a convex <code style="user-select: auto;">n</code>-sided polygon where each vertex has an integer value. You are given an integer array <code style="user-select: auto;">values</code> where <code style="user-select: auto;">values[i]</code> is the value of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> vertex (i.e., <strong style="user-select: auto;">clockwise order</strong>).</p>

<p style="user-select: auto;">You will <strong style="user-select: auto;">triangulate</strong> the polygon into <code style="user-select: auto;">n - 2</code> triangles. For each triangle, the value of that triangle is the product of the values of its vertices, and the total score of the triangulation is the sum of these values over all <code style="user-select: auto;">n - 2</code> triangles in the triangulation.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the smallest possible total score that you can achieve with some triangulation of the polygon</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/25/shape1.jpg" style="width: 201px; height: 133px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The polygon is already triangulated, and the score of the only triangle is 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/25/shape2.jpg" style="width: 446px; height: 163px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [3,7,4,5]
<strong style="user-select: auto;">Output:</strong> 144
<strong style="user-select: auto;">Explanation:</strong> There are two triangulations, with possible scores: 3*7*5 + 4*5*7 = 245, or 3*4*5 + 3*4*7 = 144.
The minimum score is 144.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/25/shape3.jpg" style="width: 207px; height: 163px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,3,1,4,1,5]
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation:</strong> The minimum score triangulation has score 1*1*3 + 1*1*4 + 1*1*5 + 1*1*1 = 13.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == values.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= values[i] &lt;= 100</code></li>
</ul>
</div>