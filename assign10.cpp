/**
* File Name: assign10.cpp
* Academic Integrity Statement: 
* I certify that, while others may have assisted me in brainstorming, debugging, and validating this program, 
* the program itself is my own work. I understand that submitting code that is the work of other individuals 
* is a violation of the course Academic Integrity Policy and may result in zero credit for the assignment, or 
* course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my 
* original work to another individual could also result in zero credit for the assignment, or course failure 
* and a report to the Academic Dishonesty Board. See Academic Integrity for Students
Links to an external site.
* 
* Assisted by and Assisted line numbers:Assidsted by Prof.Liaw,Assisted line(6-9), and line(44,46,48).
* Your Name: YUERAN MA
* Your PSU user ID:  ymm5252
* Course title: CMPSC122 Summer 2024
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