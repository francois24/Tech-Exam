
#include <iostream>
using namespace std;

int main() {
   int hrMale,hrFemale,posMale,posFemale,resMale,resFemale;
   double hrEmp, hrEmpMale, hrEmpFemale;  
   double posEmp, posEmpMale, posEmpFemale;  
    double resEmp, resEmpMale, resEmpFemale; 
   
   cout<<"Enter the number of newly hired males:";
   cin>>hrMale;
   
   cout<<"Enter the number of newly hired Females:";
   cin>>hrFemale;
   
  cout<<"Enter the number of permanent position males:";
  cin>>posMale;
   
  cout<<"Enter the number of permanent position Females:";
  cin>>posFemale;
   
    cout<<"Enter the number of resigned males:";
    cin>>resMale;
    
     cout<<"Enter the number of resigned Females:";
    cin>>resFemale;
    cout<<endl;
    
   hrEmp = hrMale + hrFemale;
   hrEmpMale = (hrMale) / hrEmp * 100;
   hrEmpFemale = (hrFemale) / hrEmp * 100;
   
   cout<<"Number of hired employee = " << hrEmp<<endl;
   cout<<"Male = " << hrEmpMale<<endl;
   cout<<"Female = " << hrEmpFemale<<endl;
   cout<<endl;
   
    posEmp = posMale + posFemale;
   posEmpMale = (posMale) / posEmp * 100;
   posEmpFemale = (posFemale) / posEmp * 100;
   
     cout<<"Number of permanent employee = " << posEmp<<endl;
   cout<<"Male = " << posEmpMale<<endl;
   cout<<"Female = " << posEmpFemale<<endl;
   cout<<endl;
   
    resEmp = resMale + resFemale;
   resEmpMale = (resMale) / resEmp * 100;
   resEmpFemale = (resFemale) / resEmp * 100;
   
     cout<<"Number of resign employee = " << resEmp<<endl;
   cout<<"Male = " << resEmpMale<<endl;
   cout<<"Female = " << resEmpFemale<<endl;
   
    return 0;
}