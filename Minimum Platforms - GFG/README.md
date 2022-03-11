# Minimum Platforms
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.<br style="user-select: auto;">
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never&nbsp;be the same for a train&nbsp;but we can have arrival time of one train equal to departure time of the other.&nbsp;At any&nbsp;given instance of time, same platform can not be used for both departure of a train and arrival of another train.&nbsp;In such cases,&nbsp;we need different platforms<strong style="user-select: auto;">.</strong></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: n = 6&nbsp;
arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
<strong style="user-select: auto;">Output</strong>: 3
<strong style="user-select: auto;">Explanation</strong>: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: n = 3
arr[] = {0900, 1100, 1235}
dep[] = {1000, 1200, 1240}
<strong style="user-select: auto;">Output</strong>: 1
<strong style="user-select: auto;">Explanation</strong>: Only&nbsp;1 platform is required to 
safely manage the arrival and departure 
of all trains.&nbsp;</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findPlatform()</strong>&nbsp;which takes the array arr[] (denoting the arrival times), array dep[] (denoting the departure times)&nbsp;and the size of the array as inputs and returns the minimum number of platforms required at the railway station such that no train waits.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Time intervals are in the 24-hour format(<strong style="user-select: auto;">HHMM) ,</strong>&nbsp;where the first two characters represent hour (between 00 to 23 ) and the last two characters represent minutes (this may be &gt; 59).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(nLogn)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 50000<br style="user-select: auto;">
0000 ≤ A[i] ≤ D[i] ≤ 2359</span></p>
 <p style="user-select: auto;"></p>
            </div>