void missingNum(vector<int>&v){
for (int i = 0; i < v.size()-1; i++)
{
    if(v[i]==v[i+1]){
       for (int j = 0; j < v[i+1]; j++)
        cout<<j<<"--";
       }
        
    }

    // else cout<<v[i+1];
}