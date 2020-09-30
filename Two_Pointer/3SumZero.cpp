typedef long long ll;
vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(), A.end());
    set<vector<int>> res;
    int n = A.size();
    ll sum;
    for(int i=0; i<n; i++){
        int f = i+1;
        int l = n-1;
        while(f<l){
            sum = ll(A[i])+ll(A[f])+ll(A[l]);
            if(sum==0){
                vector<int> a;
                a.push_back(A[i]);
                a.push_back(A[f]);
                a.push_back(A[l]);
                res.insert(a);
                    f++;
                    l--;
            }else if(sum>0){
                l--;
            }else{
                f++;
            }
        }
    }
    vector<vector<int>> v;
    for(auto i = res.begin();i!=res.end();i++)
    {
        v.push_back(*i);
    }
    return v;
    
}
