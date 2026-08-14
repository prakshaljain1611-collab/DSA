class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=abs(ax2-ax1)*abs(ay2-ay1);
         int area2=abs(by2-by1)*abs(bx2-bx1);
         int length=min(ax2,bx2)-max(bx1,ax1);
         int width= (min(ay2,by2)-max(ay1,by1));
         int common=0;
         if(width>0 && length>0){
            common=length*width;
         }
         return area1+area2-common;
    }
};