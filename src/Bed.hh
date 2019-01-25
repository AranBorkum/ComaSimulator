#include <string>

class Bed {
  
private:

  int         fNPillows;
  int         fComfortLevel;          // Scale from 1-10
  std::string fPillowColours;
  std::string fBedSize;
  std::string fBedColour;     
  
public:

  Bed() {
    fNPillows      = 1;
    fComfortLevel  = 1;
    fPillowColours = "White";
    fBedSize	   = "Single";
    fBedColour     = "Blue";
  }

  ~Bed() { ; } 
  
  void SetNPillows      (int n             ) { fNPillows = n;           }
  void SetComfortLevel  (int n             ) { fComfortLevel = n;       }
  void SetPillowColouts (std::string colour) { fPillowColours = colour; }
  void SetBedSize       (std::string size  ) { fBedSize = size;         }
  void SetBedColour     (std::string colour) { fBedColout = colour;     }

  void VaryComfortLevel(int n             ) { fComfortLevel += n;      }

  void CheckComfortCombination() {
    if (fBedSize != "Single" && fNPillows < 3) {
      if (fComfortLevel != 1) {
	VaryComfortLevel( -1 );
      }
    }
  }
  
};
