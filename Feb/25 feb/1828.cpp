class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
         int npoints = points.size();
        int nqueries = queries.size();

        vector<int> values;
        

        for(int i=0 ;i<nqueries ;i++){
            int x=queries[i][0];
            int y=queries[i][1];
            int r=queries[i][2];

            int count=0;

            for(int j=0;j<npoints;j++){
                int dx=points[j][0]-x;
                int dy=points[j][1]-y;

                if(dx*dx+dy*dy<=r*r){
                  count++;
                };
            };

            values.push_back(count);
        };

        return values;

    }
};