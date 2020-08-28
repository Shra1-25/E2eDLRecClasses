#ifndef framePredCollection_h
#define framePredCollection_h
# include <iostream>
# include <vector>
# include <cmath>
#include "DataFormats/Common/interface/SortedCollection.h"
using namespace std;
class framePredCollection {
  
  std::vector<std::vector<float>> frameCollection;
  std::vector<float> predCollection;
  float photonIetaSeed;
  float photonIphiSeed;
  std::vector<std::vector<float>> id_;
  
  public:
  typedef std::vector<std::vector<float>> key_type;
  //framePredCollection();
  ~framePredCollection();
  
  std::vector<std::vector<float>> id() const {return id_;}
  
  std::vector<std::vector<float>> getFrameCollection(){
    return frameCollection;
  }
  
  void putFrameCollection(std::vector<std::vector<float>> frame){
    frameCollection=frame;
  }
  
  std::vector<std::vector<float>> getPredCollection(){
    return predCollection;
  }
  
  void pushPredCollection(std::vector<float> prediction){
    predCollection=prediction;
  }
  
  void putIetaSeed (float Ieta_seed){
    photonIetaSeed = Ieta_seed;
  }
  
  void putIphiSeed ( Iphi_seed){
    photonIphiSeed = Iphi_seed;
  }
  
  float getIetaSeed (){
    return photonIetaSeed;
  }
  
  float getIphiSeed (){
    return photonIphiSeed;
  }
};
//typedef edm::SortedCollection<framePredCollection,edm::StrictWeakOrdering<framePredCollection>> framePredSeedCollection;
typedef edm::SortedCollection<framePredCollection> framePredSeedCollection;
#endif
