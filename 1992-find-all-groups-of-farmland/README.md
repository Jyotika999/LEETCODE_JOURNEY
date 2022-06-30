<h2><a href="https://leetcode.com/problems/find-all-groups-of-farmland/">1992. Find All Groups of Farmland</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">land</code> where a <code style="user-select: auto;">0</code> represents a hectare of forested land and a <code style="user-select: auto;">1</code> represents a hectare of farmland.</p>

<p style="user-select: auto;">To keep the land organized, there are designated rectangular areas of hectares that consist <strong style="user-select: auto;">entirely</strong> of farmland. These rectangular areas are called <strong style="user-select: auto;">groups</strong>. No two groups are adjacent, meaning farmland in one group is <strong style="user-select: auto;">not</strong> four-directionally adjacent to another farmland in a different group.</p>

<p style="user-select: auto;"><code style="user-select: auto;">land</code> can be represented by a coordinate system where the top left corner of <code style="user-select: auto;">land</code> is <code style="user-select: auto;">(0, 0)</code> and the bottom right corner of <code style="user-select: auto;">land</code> is <code style="user-select: auto;">(m-1, n-1)</code>. Find the coordinates of the top left and bottom right corner of each <strong style="user-select: auto;">group</strong> of farmland. A <strong style="user-select: auto;">group</strong> of farmland with a top left corner at <code style="user-select: auto;">(r<sub style="user-select: auto;">1</sub>, c<sub style="user-select: auto;">1</sub>)</code> and a bottom right corner at <code style="user-select: auto;">(r<sub style="user-select: auto;">2</sub>, c<sub style="user-select: auto;">2</sub>)</code> is represented by the 4-length array <code style="user-select: auto;">[r<sub style="user-select: auto;">1</sub>, c<sub style="user-select: auto;">1</sub>, r<sub style="user-select: auto;">2</sub>, c<sub style="user-select: auto;">2</sub>].</code></p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a 2D array containing the 4-length arrays described above for each <strong style="user-select: auto;">group</strong> of farmland in </em><code style="user-select: auto;">land</code><em style="user-select: auto;">. If there are no groups of farmland, return an empty array. You may return the answer in <strong style="user-select: auto;">any order</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/27/screenshot-2021-07-27-at-12-23-15-copy-of-diagram-drawio-diagrams-net.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> land = [[1,0,0],[0,1,1],[0,1,1]]
<strong style="user-select: auto;">Output:</strong> [[0,0,0,0],[1,1,2,2]]
<strong style="user-select: auto;">Explanation:</strong>
The first group has a top left corner at land[0][0] and a bottom right corner at land[0][0].
The second group has a top left corner at land[1][1] and a bottom right corner at land[2][2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/27/screenshot-2021-07-27-at-12-30-26-copy-of-diagram-drawio-diagrams-net.png" style="width: 200px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> land = [[1,1],[1,1]]
<strong style="user-select: auto;">Output:</strong> [[0,0,1,1]]
<strong style="user-select: auto;">Explanation:</strong>
The first group has a top left corner at land[0][0] and a bottom right corner at land[1][1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/27/screenshot-2021-07-27-at-12-32-24-copy-of-diagram-drawio-diagrams-net.png" style="width: 100px; height: 100px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> land = [[0]]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong>
There are no groups of farmland.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == land.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == land[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">land</code> consists of only <code style="user-select: auto;">0</code>'s and <code style="user-select: auto;">1</code>'s.</li>
	<li style="user-select: auto;">Groups of farmland are <strong style="user-select: auto;">rectangular</strong> in shape.</li>
</ul>
</div>