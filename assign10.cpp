/**
* File Name: assign10.cpp
* Description: This is a simple project that applied recursive function to calculate tricky math problem.
**/

#include <ctime>//i suspect whether it will work without including time-raleted declarations
#include <string>
#include <iostream>
#include <sys/times.h>
#include <unistd.h>
#include "timer.h"
 using namespace std;
int calcPath(int eastDistance,int northDistance){//function definitaion
    if(eastDistance==0||northDistance==0)
    return 1;
    return calcPath(northDistance-1,eastDistance)+calcPath(northDistance,eastDistance-1);
}
int main(){
    class Timer tm;//create a new object

    using namespace std;
    
    int eastDistance;
    int northDistance;
    int numPath;
 
    cout<<"How many points north of A is B? ";
    cin>>northDistance;
    cout<<"How many points east of A is B? ";
    cin>>eastDistance;
    tm.start();
    numPath=calcPath(eastDistance,northDistance);
    tm.stop();
    cout<<"There are "<<numPath<<" northeast paths between A and B."<<endl;
    tm.show();
   
    return 0;
    
}
// eof timer.cpp
/*Sample output:
How many points north of A is B? 2
How many points east of A is B? 3
There are 10 northeast paths between A and B.
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s



...Program finished with exit code 0
Press ENTER to exit console.
How many points north of A is B? 12
How many points east of A is B? 16
There are 30421755 northeast paths between A and B.
  Process Timer
  -------------------------------
  User CPU Time  : 0.16 s
  System CPU Time: 0 s
  Wait Time      : 0.01 s
  -------------------------------
  Elapsed Time   : 0.17 s



...Program finished with exit code 0
Press ENTER to exit console.
How many points north of A is B? 16
How many points east of A is B? 16
There are 601080390 northeast paths between A and B.
  Process Timer
  -------------------------------
  User CPU Time  : 3.51 s
  System CPU Time: 0 s
  Wait Time      : 0 s
  -------------------------------
  Elapsed Time   : 3.51 s



...Program finished with exit code 0
Press ENTER to exit console.
*/
