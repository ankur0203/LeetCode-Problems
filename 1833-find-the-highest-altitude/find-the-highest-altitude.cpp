class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int maximum = 0;
        for(int i=0;i<gain.size();i++){
            altitude = altitude + gain[i];
            if(altitude > maximum){
                maximum = altitude;
            }
        }
        return maximum;
        
    }
};