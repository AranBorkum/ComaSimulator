#include <string>

class Patient {
  
private:
  double fHealth; 
  double fLife;
  double fWillToLive;

  std::string fGender;
  
public:
  //  CONSTRUCTOR FOR PATIENT OBJECT
  Patient(double      cHealth     = 100,
          double      cLife       = 100,
          double      cWillToLive = 10,
	  std::string cGender     = "")
  {
    fHealth     = cHealth;
    fLife       = cLife;
    fWillToLive = cWillToLive;
    fGender     = cGender
  }

  // DESTRUCTOR FOR PATIENT OBJECT
  ~Patient() { }
    
  void SetHealthValueChange(double incriment)   { fHealth     += incriment; }
  void SetLiveValueChange  (double incriment)   { fLife       += incriment; }
  void SetWillToLiveChange (double incriment)   { fWillToLive += incriment; }
  void SetGender           (std::string gender) { fGender      = gender   ; }
  
  double      GetHealthValue    () { return fHealth;     }
  double      GetLifeValue      () { return fLife;       }
  double      GetWillToLiveValue() { return fWillToLive; }
  std::string GetGender         () { return fGender;     }

};
