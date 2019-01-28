#include <string>
#include <vector>
#include <cmath>

std::vector< std::string > MattressSizes         = {"Single", "Double", "Queen", "King", "SuperKing"};
std::vector< std::string > MattressStyles        = {"Basic", "Standard", "Luxury", "MemoryFoam"};
std::vector< std::string > MattressCoverMaterial = {"Bare", "Linen", "Cotton", "EgyptianCotton"};

class Mattress {

private:

  int         fMattressComfortValue;

  std::string fMattressSize;          
  std::string fMattressStyle;
  std::string fMattressCoverMaterial;

public:

  Mattress(std::string cMattressSize,
	   std::string cMattressStyle,
	   std::string cMattressCoverMaterial){
    fMattressSize          = cMattressSize;	             
    fMattressStyle	   = cMattressStyle;	      
    fMattressCoverMaterial = cMattressCoverMaterial;
  }

  Mattress(){
    fMattressSize          = "Single";
    fMattressStyle	   = "Basic";
    fMattressCoverMaterial = "Bare";
  }

  ~Mattress() { ; }

  std::string GetMattressSize         () { return fMattressSize;          }
  std::string GetMattressStyle	      () { return fMattressStyle;         }
  std::string GetMattressCoverMaterial() { return fMattressCoverMaterial; }

  void SetMattressSize         (std::string option) { fMattressSize          = option; }
  void SetMattressStyle	       (std::string option) { fMattressStyle	     = option; }
  void SetMattressCoverMaterial(std::string option) { fMattressCoverMaterial = option; }

  int CalculateMattressComfortValue(Mattress m) {

    int TotalPossibleMattressScore = MattressSize.size()  + 
                                     MattressStyle.size() +
                                     MattressCoverMaterial.size();

    int MattressSizeValue          = 0;
    int MattressStyleValue         = 0;
    int MattressCoverMaterialValue = 0;

    for (int i=0; i<MattressSizes.size; ++i)
      { if (m.GetMattressSize == MattressSizes[i]) {MattressSizeValue = i+1; }}

    for (int i=0; i<MattressStyles.size; ++i)
      { if (m.GetMattressSize == MattressStyles[i]) {MattressStyleValue = i+1; }}

    for (int i=0; i<MattressCoverMaterials.size; ++i)
      { if (m.GetMattressSize == MattressCoverMaterials[i]) {MattressCoverMaterialValue = i+1; }}
      
    return floor((static_cast<double>(MattressSizeValue +
				      MattressStyleValue +
				      MattressCoverMaterialValue)/
                  static_cast<double>(TotalPossibleMattressScore))
		 *static_cast<double>(10));

  
  }
};
