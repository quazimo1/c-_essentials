class NumMatrix {
public:
	vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        mat = vector<vector<int>> (m);
        
        for(int i = 0; i < m; i++)
        {
        	mat[i] = vector<int> (n);
        	for(int j = 0; j < n; j++)
        	{
        		if(i == 0 or j == 0)
        		{
        			if(i == 0 and j == 0)
        			{
        				mat[i][j] = matrix[i][j];
        			}
        			else if(i == 0)
        			{
        				mat[i][j] = matrix[i][j] + mat[i][j - 1];
        			}
        			else
        			{
        				mat[i][j] = matrix[i][j] + mat[i - 1][j];
        			}
        		}
        		else
        		{
        			mat[i][j] = matrix[i][j] + mat[i - 1][j] + mat[i][j - 1] - mat[i - 1][j - 1];
        		}
        	}
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {

    	int ans;
    	if(row1 > 0 and col1 > 0)
    	{
    		ans  = mat[row2][col2] - mat[row1 - 1][col2] - mat[row2][col1 - 1] + mat[row1 - 1][col1 - 1];
    	}
    	else
    	{
    		if(row1 == 0 and col1 != 0)
    		{
    			ans  = mat[row2][col2] - mat[row2][col1 - 1];
    		}
    		else if(col1 == 0 and row1 != 0)
    		{
    			ans  = mat[row2][col2] - mat[row1 - 1][col2];
    		}
    		else
    		{
    			ans = mat[row2][col2];
    		}

    	}
    	return ans;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */