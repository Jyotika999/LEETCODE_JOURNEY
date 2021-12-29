<h2>355. Design Twitter</h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a simplified version of Twitter where users can post tweets, follow/unfollow another user, and is able to see the <code style="user-select: auto;">10</code> most recent tweets in the user's news feed.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">Twitter</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Twitter()</code> Initializes your twitter object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void postTweet(int userId, int tweetId)</code> Composes a new tweet with ID <code style="user-select: auto;">tweetId</code> by the user <code style="user-select: auto;">userId</code>. Each call to this function will be made with a unique <code style="user-select: auto;">tweetId</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">List&lt;Integer&gt; getNewsFeed(int userId)</code> Retrieves the <code style="user-select: auto;">10</code> most recent tweet IDs in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user themself. Tweets must be <strong style="user-select: auto;">ordered from most recent to least recent</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void follow(int followerId, int followeeId)</code> The user with ID <code style="user-select: auto;">followerId</code> started following the user with ID <code style="user-select: auto;">followeeId</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void unfollow(int followerId, int followeeId)</code> The user with ID <code style="user-select: auto;">followerId</code> started unfollowing the user with ID <code style="user-select: auto;">followeeId</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
[[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]
<strong style="user-select: auto;">Output</strong>
[null, null, [5], null, null, [6, 5], null, [5]]

<strong style="user-select: auto;">Explanation</strong>
Twitter twitter = new Twitter();
twitter.postTweet(1, 5); // User 1 posts a new tweet (id = 5).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -&gt; [5]. return [5]
twitter.follow(1, 2);    // User 1 follows user 2.
twitter.postTweet(2, 6); // User 2 posts a new tweet (id = 6).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 2 tweet ids -&gt; [6, 5]. Tweet id 6 should precede tweet id 5 because it is posted after tweet id 5.
twitter.unfollow(1, 2);  // User 1 unfollows user 2.
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -&gt; [5], since user 1 is no longer following user 2.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= userId, followerId, followeeId &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= tweetId &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the tweets have <strong style="user-select: auto;">unique</strong> IDs.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">3 * 10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">postTweet</code>, <code style="user-select: auto;">getNewsFeed</code>, <code style="user-select: auto;">follow</code>, and <code style="user-select: auto;">unfollow</code>.</li>
</ul>
</div>