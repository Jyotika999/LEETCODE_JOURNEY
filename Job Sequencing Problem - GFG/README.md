# Job Sequencing Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a set of <strong style="user-select: auto;">N</strong> jobs where each <strong style="user-select: auto;">job<sub style="user-select: auto;">i</sub></strong>&nbsp;has a deadline and profit associated with it. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each job takes <strong style="user-select: auto;"><em style="user-select: auto;">1</em></strong> unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with job if and only if the job is completed by its deadline. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Find the number of jobs done and the&nbsp;<strong style="user-select: auto;">maximum profit</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span></strong><span style="font-size: 18px; user-select: auto;">J</span><span style="font-size: 18px; user-select: auto;">obs will be given in the form (Job<sub style="user-select: auto;">id</sub>, Deadline,&nbsp;Profit) associated with that Job.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 4
Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
<strong style="user-select: auto;">Output:
</strong>2 60<strong style="user-select: auto;">
Explanation:
</strong>Job<sub style="user-select: auto;">1</sub>&nbsp;and Job<sub style="user-select: auto;">3 </sub>can be done with
maximum profit of 60 (20+40).</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 5
Jobs = {(1,2,100),(2,1,19),(3,2,27),
&nbsp;       (4,1,25),(5,1,15)}
<strong style="user-select: auto;">Output:
</strong>2 127<strong style="user-select: auto;">
Explanation:
</strong>2 jobs can be done with
maximum profit of 127 (100+27).</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task</strong> :<br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">JobScheduling()</strong> which takes an integer <strong style="user-select: auto;">N</strong> and an array of Jobs(Job id, Deadline,&nbsp;Profit) as input and returns the count of jobs and maximum profit.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong>: O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Deadline &lt;= 100<br style="user-select: auto;">
1 &lt;= Profit &lt;= 500</span></p>
 <p style="user-select: auto;"></p>
            </div>