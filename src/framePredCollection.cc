#include "ProdTutorial/E2eDlRecClasses/interface/framePredCollection.h"

framePredCollection::~framePredCollection(){
    frameCollection.clear();
    predCollection.clear();
    photonIetaSeeds.clear();
    photonIphiSeeds.clear();
  }
