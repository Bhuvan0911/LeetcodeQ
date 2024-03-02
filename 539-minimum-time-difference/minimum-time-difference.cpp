class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector <int> minutes;
        
        for(int i =0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int minute = stoi(curr.substr(3,2));
            int total_time = hours*60 +  minute;
            minutes.push_back(total_time);
        }
        
        sort(minutes.begin(),minutes.end());
        
        int minimum = INT_MAX;
        int n = minutes.size();
        for(int i=0;i<minutes.size()-1;i++)
        {
            int diff = minutes[i+1] - minutes[i];
            minimum = min(minimum ,diff);
        }      
        
        int lastdiff = (minutes[0] + 1440)- minutes[n-1];
       minimum = min(minimum ,lastdiff);
        return minimum;
    }
};