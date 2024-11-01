#include <iostream>
using namespace std;
#include "hospital.h"


void emergencyWard::RegisterPatient(int p){
    Q.enque(p);
}  

void emergencyWard::servePatient(){
    patient* pat = Q.deque();
    if (pat == nullptr){
        cout<<"No patients are left\n";
    }
    else {
        cout<<"Now serving:\n";
        cout<<"Patient ID: "<<pat->getId()<<"\t"<<"Priority: "<<pat->getpri();
    }
}

void emergencyWard::CanDoctorGoHome(){
    if (Q.isEmpty()){
        cout<<"No patients left, Doctor can go home and rest\n";
    }
    else {
        cout<<"Patients are still waiting for their treatment\n";
    }
}

void emergencyWard::CancelAll(){
    Q.clear();
    cout<<"All appointments are being cancelled\n";
}

void emergencyWard::ShowAllpatients(){
    cout<<"\tPatients\tPriority"<<endl;
    Q.display();
}