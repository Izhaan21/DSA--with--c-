class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int total_elements = m*n;
        int startingRow = 0;
        int endingCol = n-1;
        int endingRow = m-1;
        int startingCol = 0;

        int count = 0 ; 
        //printing staringRow
        while(count<total_elements){
            for(int i = startingCol ; i<=endingCol && count<total_elements ; i++ ){
                ans.push_back(matrix[startingRow][i]);
                count++;          

            }

               startingRow++;

        //printing endingCol 
        for(int i = startingRow ; i<=endingRow && count<total_elements ; i++ ){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
              endingCol--;

        //printing endingRow

       for(int i = startingRow ; i<=endingRow && count<total_elements ; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
                  
            } 
             startingCol++;

        //printing startingCol
         for(int i = endingRow ; i<=startingRow && count<total_elements ; i++ ){
                ans.push_back(matrix[i][startingCol]);
                count++;      

            }  
             startingCol++;
             cout

        }
      return ans;
    }
