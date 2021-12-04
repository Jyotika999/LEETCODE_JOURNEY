class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      //  int evalRPN(vector<string> &tokens) {
	// add your logic here
	int n = tokens.size();
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		string f = tokens[i];
		cout<<f<<"\n";
		if(f=="+")
		{
			int ff = s.top();
			s.pop();
			int ss = s.top();
			s.pop();
			s.push(ff+ss);
		}
		else if(f=="-")
		{
				int ff = s.top();
			s.pop();
			int ss = s.top();
			s.pop();
			s.push(-ff+ss);
		}
		else if(f=="*")
		{
				int ff = s.top();
			s.pop();
			int ss = s.top();
			s.pop();
			s.push(ff*ss);
		}
		else if(f=="/")
		{
				int ff = s.top();
			s.pop();
			int ss = s.top();
			s.pop();
			s.push(ss/ff);
		}
        else
        {
            s.push(stoi(f));
        }
		
	}
	return s.top();
}
  //  }
};