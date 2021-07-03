//
//  Band.h
//  InputAudioAnalyzer
//
//  Created by Daniel Schweitzer on 09.12.20.
//
//

#pragma once
#include <list>
#include "cinder/app/App.h"

using namespace ci;
using namespace ci::app;
using namespace std;


class Range {
    
public:
    Range(){};
    bool    active;
    bool    beat;
    int     beatCounter;
    double  beatThreshold;
    double  rangeEnergy;
    double  rangeMagnitude;
    double  smoothRangeMagnitude;
    double  rangeMagnitudeCorrected;
    double  magnitudeMin;
    double  magnitudeMax;
    double	magnDecay;
    int     position;
    int     rangeWidth;
    
    std::list<double> historyEnergyBuffer;
};
