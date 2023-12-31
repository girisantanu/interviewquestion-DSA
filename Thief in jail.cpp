/* A thief trying to escape from a jail. He has to cross N walls each with varying heights (every height is greater than 0).
 He climbs X feet every time. But, due to the slippery nature of those walls, every time he slips back by Y feet. 
 Now the task is to calculate the total number of jumps required to cross all walls and escape from the jail.
Examples : 
 Input : heights[] = {11, 11}
                X = 10;
                Y = 1; 
Output : 4
He needs to make 2 jumps for first wall
and 2 jumps for second wall.

Input : heights[] = {11, 10, 10, 9}
                 X = 10;
                 Y = 1;
Output : 5
*/

#include<iostream>
using namespace std;

int jumpscount(int x,int y,int n, int height[])
{
    int jumps =0;

    for(int i=0;i< n;i++){
        if(height[i]<=x){
        jumps++;
        continue;
    }
    int h=height[i];
    while(h>x)
    {
        jumps++;
        h=h-(x-y);
    }
    jumps++;
}
return jumps;
}

int main(){
    int x=10,y=1;
    int height []={ 11,10,10,9};
    int n=sizeof(height)/sizeof(height[0]);
    cout<<jumpscount(x,y,n,height);
    return 0;
}

