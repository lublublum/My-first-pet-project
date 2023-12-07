#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "siteClass.h"
#include "siteRestructionClass.h"

using namespace std;

void SiteDirectionSelection(list<Site>& data, SiteRestructions& myRestruction);

void SiteRegionSelection(list<Site>& data, SiteRestructions& myRestruction);
    
void SiteTimeInWaySelection(list<Site>& data, SiteRestructions& myRestruction);

void SiteLandscapeSelection(list<Site>& data, SiteRestructions& myRestruction);

void SiteSquareSelection(list<Site>& data, SiteRestructions& myRestruction);

void SitePriceSelection(list<Site>& data, SiteRestructions& myRestruction);

void SiteNeighboursSelection(list<Site>& data, SiteRestructions& myRestruction);