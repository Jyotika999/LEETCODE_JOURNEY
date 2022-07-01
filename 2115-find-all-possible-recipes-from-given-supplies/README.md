<h2><a href="https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/">2115. Find All Possible Recipes from Given Supplies</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have information about <code style="user-select: auto;">n</code> different recipes. You are given a string array <code style="user-select: auto;">recipes</code> and a 2D string array <code style="user-select: auto;">ingredients</code>. The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> recipe has the name <code style="user-select: auto;">recipes[i]</code>, and you can <strong style="user-select: auto;">create</strong> it if you have <strong style="user-select: auto;">all</strong> the needed ingredients from <code style="user-select: auto;">ingredients[i]</code>. Ingredients to a recipe may need to be created from <strong style="user-select: auto;">other </strong>recipes, i.e., <code style="user-select: auto;">ingredients[i]</code> may contain a string that is in <code style="user-select: auto;">recipes</code>.</p>

<p style="user-select: auto;">You are also given a string array <code style="user-select: auto;">supplies</code> containing all the ingredients that you initially have, and you have an infinite supply of all of them.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of all the recipes that you can create. </em>You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">Note that two recipes may contain each other in their ingredients.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> recipes = ["bread"], ingredients = [["yeast","flour"]], supplies = ["yeast","flour","corn"]
<strong style="user-select: auto;">Output:</strong> ["bread"]
<strong style="user-select: auto;">Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> recipes = ["bread","sandwich"], ingredients = [["yeast","flour"],["bread","meat"]], supplies = ["yeast","flour","meat"]
<strong style="user-select: auto;">Output:</strong> ["bread","sandwich"]
<strong style="user-select: auto;">Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> recipes = ["bread","sandwich","burger"], ingredients = [["yeast","flour"],["bread","meat"],["sandwich","meat","bread"]], supplies = ["yeast","flour","meat"]
<strong style="user-select: auto;">Output:</strong> ["bread","sandwich","burger"]
<strong style="user-select: auto;">Explanation:</strong>
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".
We can create "burger" since we have the ingredient "meat" and can create the ingredients "bread" and "sandwich".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == recipes.length == ingredients.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= ingredients[i].length, supplies.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= recipes[i].length, ingredients[i][j].length, supplies[k].length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">recipes[i], ingredients[i][j]</code>, and <code style="user-select: auto;">supplies[k]</code> consist only of lowercase English letters.</li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">recipes</code> and <code style="user-select: auto;">supplies</code>&nbsp;combined are unique.</li>
	<li style="user-select: auto;">Each <code style="user-select: auto;">ingredients[i]</code> does not contain any duplicate values.</li>
</ul>
</div>