#include "vect.h"
vector define_vector(int a,int b,int c){
    vector ans;
    ans.x=a;
    ans.y=b;
    ans.z=c;
    return ans;
}
vector sum(vector vct1,vector vct2){
    vector sum;
    sum.x = vct1.x+vct2.x;
    sum.y = vct1.y+vct2.y;
    sum.z = vct1.z+vct2.z;
    return sum;
}
vector difference(vector vct1,vector vct2){
    vector diff;
    diff.x = vct1.x-vct2.x;
    diff.y = vct1.y-vct2.y;
    diff.z = vct1.z-vct2.z;
    return diff;
}
int dot(vector vct1,vector vct2){
    int sum=0;
    sum=(vct1.x*vct2.x)+(vct1.y*vct2.y)+(vct1.z*vct2.z);
    return sum;
}
float magnitude(vector vect){
    float ans = 0.0;
    ans = sqrt(pow(vect.x,2)+pow(vect.y,2)+pow(vect.z,2));
    return ans;
}
