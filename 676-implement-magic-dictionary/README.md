<h2><a href="https://leetcode.com/problems/implement-magic-dictionary/">676. Implement Magic Dictionary</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a data structure that is initialized with a list of <strong style="user-select: auto;">different</strong> words. Provided a string, you should determine if you can change exactly one character in this string to match any word in the data structure.</p>

<p style="user-select: auto;">Implement the&nbsp;<code style="user-select: auto;">MagicDictionary</code>&nbsp;class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">MagicDictionary()</code>&nbsp;Initializes the object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void buildDict(String[]&nbsp;dictionary)</code>&nbsp;Sets the data structure&nbsp;with an array of distinct strings <code style="user-select: auto;">dictionary</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool search(String searchWord)</code> Returns <code style="user-select: auto;">true</code> if you can change <strong style="user-select: auto;">exactly one character</strong> in <code style="user-select: auto;">searchWord</code> to match any string in the data structure, otherwise returns <code style="user-select: auto;">false</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["MagicDictionary", "buildDict", "search", "search", "search", "search"]
[[], [["hello", "leetcode"]], ["hello"], ["hhllo"], ["hell"], ["leetcoded"]]
<strong style="user-select: auto;">Output</strong>
[null, null, false, true, false, false]

<strong style="user-select: auto;">Explanation</strong>
MagicDictionary magicDictionary = new MagicDictionary();
magicDictionary.buildDict(["hello", "leetcode"]);
magicDictionary.search("hello"); // return False
magicDictionary.search("hhllo"); // We can change the second 'h' to 'e' to match "hello" so we return True
magicDictionary.search("hell"); // return False
magicDictionary.search("leetcoded"); // return False
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;dictionary.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;dictionary[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">dictionary[i]</code> consists of only lower-case English letters.</li>
	<li style="user-select: auto;">All the strings in&nbsp;<code style="user-select: auto;">dictionary</code>&nbsp;are <strong style="user-select: auto;">distinct</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;searchWord.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">searchWord</code>&nbsp;consists of only lower-case English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">buildDict</code>&nbsp;will be called only once before <code style="user-select: auto;">search</code>.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">100</code> calls will be made to <code style="user-select: auto;">search</code>.</li>
</ul>
</div>