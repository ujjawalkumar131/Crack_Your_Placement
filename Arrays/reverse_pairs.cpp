#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<long long, null_type,less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update>

class Solution {
public:
    int reversePairs(vector<int>& arr) 
    {
        int n = arr.size();
        ordered_set st;
        
        long long ans = 0;

        for(int i=n-1; i>=0; i--)
        {
            int count = st.order_of_key(arr[i]*1ll);
            ans += count;

            st.insert(2*1ll*arr[i]);
        }

        return ans;
    }
};