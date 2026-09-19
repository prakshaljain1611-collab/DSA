class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int closex= max(x1,min(xCenter,x2));
        int closey= max(y1,min(yCenter,y2));
        int distance= (closex-xCenter)*(closex-xCenter)+(closey-yCenter)*(closey-yCenter);
        if(distance<=radius*radius){
            return true;
        }
        return false;
    }
};