#include "que.h"
#ifndef hospital_h
#define hospital_h

class emergencyWard{
    public:
        que Q;
        void RegisterPatient(int pri);
        void servePatient();
        void CancelAll();
        void CanDoctorGoHome();
        void ShowAllpatients();
};

#endif