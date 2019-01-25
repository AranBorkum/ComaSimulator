#include <string>
#include <vector>
#include <cmath>

std::vector< std::string > PillowSizes    = {"Small", "Medium", "Large"};
std::vector< std::string > PillowStyles   = {"Basic", "Down", "MemoryFoam"};
std::vector< std::string > CoverMaterials = {"Bare", "Linen", "Cotton", "EgyptianCotton"};


class Pillow {

private:

  int         fPillowComfortValue;  // Scale from 1-10
  
  std::string fPillowSize;          // "Small", "Medium", "Large"
  std::string fPillowStyle;         // "Basic", "Down", "MemoryFoam"
  std::string fCoverMaterial;       // "Bare", "Linen", "Cotton", "EgyptianCotton"

public:

  Pillow(std::string cPillowSize,
	 std::string cPillowStyle,
	 std::string cCoverMaterial){
    fPillowSize    = cPillowSize;
    fPillowStyle   = cPillowStyle;
    fCoverMaterial = cCoverMaterial;
  }
  
  Pillow(){
    fPillowSize    = "Small";
    fPillowStyle   = "Basic";
    fCoverMaterial = "Bare";
  }

  std::string GetPillowSize()          { return fPillowSize;    }
  std::string GetPillowStyle()         { return fPillowStyle;   }
  std::string GetPillowCoverMaterial() { return fCoverMaterial; }
  
  void SetPillowSize   (std::string option) { fPillowSize     = option; }
  void SetPillowStyle  (std::string option) { fPillowStyle    = option; }
  void SetCoverMaterial(std::string option) { fCoverMaterial  = option; }

  int CalculatePillowComfortValue(Pillow p) {

    int TotalPossibleScore       = PillowSizes.size() + PillowStyles.size() + CoverMaterials.size();
    int PillowSizeValue          = 0;
    int PillowStyleValue         = 0;
    int PillowCoverMaterialValue = 0;

    for (int i=0; i<PillowSizes; ++i)
      { if (p.GetPillowSize == PillowSizes[i]      ) {PillowSizeValue = i+1;        }}
    for (int i=0; i<PillowStyles; ++i)
      { if (p.GetPillowSize == PillowStyles[i]     ) {PillowStyleValue = i+1;       }}
    for (int i=0; i<CoverMaterials; ++i)
      { if (p.GetCoverMaterial == CoverMaterials[i]) {PillowCoverMaterialValue = i+1}}

    return floor((static_cast<double>(PillowSizeValue + PillowStyleValue + PillowCoverMaterialValue)/
                  static_cast<double>(TotalPossibleScore))*static_cast<double>(10));
  }

};
