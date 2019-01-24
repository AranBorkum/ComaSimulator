#include <string>

class Bed {
  
private:

  int         fNPillows;
  std::string fPillowColours;
  std::string fBedSize;
  std::string fBedColour;     
  
public:

  Bed() {
    fNPillows      = 1;   
    fPillowColours = "White";
    fBedSize	   = "Single";
    fBedColour     = "Blue";
  }

  ~Bed() { ; } 
  
  void SetNPillows     (int n             ) { fNPillows = n;           }
  void SetPillowColouts(std::string colour) { fPillowColours = colour; }
  void SetBedSize      (std::string size  ) { fBedSize = size;         }
  void SetBedColour    (std::string colour) { fBedColout = colour;     }

};
