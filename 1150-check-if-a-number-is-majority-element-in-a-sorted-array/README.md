<h2><a href="https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/">1150. Check If a Number Is Majority Element in a Sorted Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> sorted in non-decreasing order and an integer <code style="user-select: auto;">target</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if</em> <code style="user-select: auto;">target</code> <em style="user-select: auto;">is a <strong style="user-select: auto;">majority</strong> element, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">majority</strong> element in an array <code style="user-select: auto;">nums</code> is an element that appears more than <code style="user-select: auto;">nums.length / 2</code> times in the array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,4,5,5,5,5,5,6,6], target = 5
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The value 5 appears 5 times and the length of the array is 9.
Thus, 5 is a majority element because 5 &gt; 9/2 is true.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,100,101,101], target = 101
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The value 101 appears 2 times and the length of the array is 4.
Thus, 101 is not a majority element because 2 &gt; 4/2 is false.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], target &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in non-decreasing order.</li>
</ul>
</div>