//The grade of a student can be based on the following criteria:
//	Attendance must be more than 50%,Tests scores must be more than .70,Total score must be more than 5600 (just go with this number)
//	The grades are awarded as follows:      Grade is 10: if all conditions are met
//						Grade is 9: if conditions 1 and 2 are met
//						Grade is 8: if conditions 3 and 3 are met
//						Grade is 7: if conditions 1 and 3 are met
//						Grade is 6: if only one condition is met
//						Grade is 5: if none of the conditions are met
#include<iostream>
using namespace std;
int main(){
    int att,totalscore;
    float testscore;
    cout<<"enter Attendance , Tests scores: and Total score"<<endl;
    cin>>att>>testscore>>totalscore;

    if(att > 50 && testscore > 0.7  && totalscore > 5600){
        cout<<"res: 10"<<endl;    
    }
    else if( att > 50  && testscore > 0.7 && totalscore < 5600 ){
        cout<<"res: 9"<<endl;      
    }
    else if( att < 50 && testscore > 0.7 && totalscore > 5600 ){
        cout<<"res: 8"<<endl;        
    }
    else if( att > 50  && testscore < 0.7  && totalscore > 5600 ){
        cout<<"res: 7"<<endl;        
    }
    else if(att > 50  || testscore > 0.7   || totalscore > 5600 ){
        cout<<"res: 6"<<endl;        
    }    
    else{
        cout<<"res : 5"<<endl;
    }
    return 0;    
}
