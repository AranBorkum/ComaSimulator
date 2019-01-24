#include <string>

class Patient {
  
private:
  double fHealth;
  double fLife;
  double fWillToLive;				
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Health:     100 -> In "full" health, 0 -> Dead								//
// Life:       metric of how alive your are perceived to be by your family. I see this working towards		//
// 	       stats boosts. Maybe I'm shooting too high							//
// WillToLive: Measure of how depressed the character is. This could contribute to stats boosts, maybe?		//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
