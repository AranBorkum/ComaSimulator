class Patient {
  
private:
  double fHealth; fLife; fWillToLive;
  
  
public:
  //  CONSTRUCTOR FOR PATIENT OBJECT
  Patient(
          double cHealth = 100,
          double cLife   = 100,
          double cWillToLive = 10
          )
  {
    fHealth     = cHealth;
    fLife       = cLife;
    cWillToLive = fWillToLive;
  }

  // DESTRUCTOR FOR PATIENT OBJECT
  ~Patient() { }
    
  void SetHealthValueChange(double incriment) { fHealth     += incriment; }
  void SetLiveValueChange  (double incriment) { fLife       += incriment; }
  void SetWillToLiveChange (double incriment) { fWillToLive += incriment; }
  
  double GetHealthValue    () { return fHealth;     }
  double GetLifeValue      () { return fLife;       }
  double GetWillToLiveValue() { return fWillToLive; }
  
};
