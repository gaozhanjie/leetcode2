class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if( nums.size() < 2 )
			return;
		int index1 = 0, index2 = 0;
		for( ; index2 < nums.size(); index2++ )
		{
			if( nums[ index2 ])
			{
				if( index1 != index2 )
				{
					nums[ index1 ] = nums[ index2 ];
					nums[ index2 ] = 0;
				}
				index1++;
			}
		}
    }
};