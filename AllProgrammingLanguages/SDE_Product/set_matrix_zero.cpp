//i don't know where is the exact mistake

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<vector<int>> temp1;
        vector<int> temp2;
        temp2.push_back(0);
        temp2.push_back(0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0 ;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    temp2[0]=i;
                    temp2[1]=j;
                    temp1.push_back(temp2);
                }
            }
        }
        for(auto it : temp1)
        {
            int x=it[0];
            int y=it[1];
            cout<<x<<endl<<y;

            for(int j=0 ;j<3;j++)  //matrix[0].size()
            {matrix[x][j]==0;cout<<"came";}

            for(int j=0 ;j<3;j++)//matrix.size()
            {
                matrix[j][y]==0;
                cout<<"came";
            }


        }

    }
};
