string Solution::simplifyPath(string A) {
    stack<string> s;
    int n = A.size();
    int i=0;
    
    while(i<n){
        // if(!s.empty())  cout<<s.top()<<"   :";
        // cout<<i<<" ";
        if(A[i] == '/'){
            i++;
        }else if(A[i] == '.'){
            if(A[i+1] == '.'){
                i++;
                if(!s.empty())  s.pop();
            }
            i++;
        }else{
            string a;
            while(i<n && A[i]!='/'){
                a+=A[i];
                i++;
            }
            s.push(a);
            // cout<<"pushed "<<a<<" ";
            // i++;
        }
    }
    string res = "";
    // vector<string> vec;
    // while(!s.empty()){
    //     vec.push_back(s.top());
    //     s.pop();
    // }
    // for(int i = vec.size()-1; i>0; i--){
    //     res+=vec[i];
    //     res+="/";
    // }
    // if(vec.size()>=1)   res +=vec[0]; 
    while(s.size()>0){
        string x = s.top();
        reverse(x.begin(), x.end());
        res+=x;
        s.pop();
        res+="/";
    }
    // if(s.size() == 1)
    //     res+=s.top();
    reverse(res.begin(), res.end());
    if(res == "")   return "/";
    return res;
}
