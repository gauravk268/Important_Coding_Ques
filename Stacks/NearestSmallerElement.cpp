vector<int> Solution::prevSmaller(vector<int> &A) {
    
    int n = A.size();
    stack<int> s;
    s.push(A[0]);
    vector<int> res;
    res.push_back(-1);
    int i=1;
    while(i<n){
        int x = A[i];
        while(!s.empty() && s.top()>=x){
            s.pop();
        }
        if(s.empty()){
            res.push_back(-1);
        }else{
            res.push_back(s.top());
        }
        s.push(x);
        i++;
    }
    return res;
    
}
