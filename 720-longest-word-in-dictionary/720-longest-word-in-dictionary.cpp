class Node{
public:
    char data;
    bool terminal;
    unordered_map<char, Node*>mp;
    
    Node(char d)
    {
        data = d;
        terminal = false;
    }
};
class Trie{
    public:
    	Node * root;
	Trie(){
		root = new Node('\0');
	}
	void insert(string word){
        // cout<<word<<"\n";
		int len = word.length();
		Node * temp= root;
		for(int i=0;i<len;i++)
		{
			if(temp->mp.count(word[i])==0){
				Node * newnode = new Node(word[i]);
				temp->mp[word[i]]= newnode;
			}
			temp= temp->mp[word[i]];

      }
	temp->terminal = true;
}
bool search(string word)
{
    
	int len = word.length();
	Node * temp= root;
	for(int i=0;i<len;i++)
	{
	char cur = word[i];
	if(temp->mp.count(cur)==0)
		return false;
	temp= temp->mp[cur];
	}
	return temp->terminal;
}

};




class Solution {
public:
    string longestWord(vector<string>& words) {
        int total_words = words.size();
	   string longestword = "";
	   Trie *t = new Trie();
	   for(int i=0;i<total_words;i++)
		{
			string curword = words[i];
			t->insert(curword);
		}


	   for(int i=0;i<total_words;i++)
		{
			string curword = words[i];
			int flag=1;
			for(int j=0;j<curword.length();j++)
			{	
				string subword = curword.substr(0, j+1);
                // cout<<curword<<"\n";
				if(t->search(subword)==false)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				if(longestword.length()==curword.length())
                {
                    if(curword<longestword)
                        longestword = curword;
                }
                else if(longestword.length()<curword.length())
                {
                        longestword = curword;
                }
			}
		}

		return longestword;

    }
};

