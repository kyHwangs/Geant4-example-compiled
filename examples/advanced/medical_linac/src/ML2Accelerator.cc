//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// The code was written by :
//	^Claudio Andenna  claudio.andenna@ispesl.it, claudio.andenna@iss.infn.it
//      *Barbara Caccia barbara.caccia@iss.it
//      with the support of Pablo Cirrone (LNS, INFN Catania Italy)
//	with the contribute of Alessandro Occhigrossi*
//
// ^INAIL DIPIA - ex ISPESL and INFN Roma, gruppo collegato Sanità, Italy
// *Istituto Superiore di Sanità and INFN Roma, gruppo collegato Sanità, Italy
//  Viale Regina Elena 299, 00161 Roma (Italy)
//  tel (39) 06 49902246
//  fax (39) 06 49387075
//
// more information:
// http://g4advancedexamples.lngs.infn.it/Examples/medical-linac
//
//*******************************************************//

#include "ML2Accelerator.hh"

#include "G4SystemOfUnits.hh"

CML2Accelerator::CML2Accelerator()
{
	jaw1XAperture = 0;
	jaw2XAperture = 0;
	jaw1YAperture = 0;
	jaw2YAperture = 0;
	idEnergy = 0;
	isoCentre = 0;
}

CML2Accelerator::~CML2Accelerator(void)
{
}

void CML2Accelerator::Construct(G4VPhysicalVolume *, G4double)
 {
 }

void CML2Accelerator::reset()
{
	vec_leavesA.clear();
	vec_leavesB.clear();
}

void CML2Accelerator::setJaw1X(G4double val)
{
    jaw1XAperture = val;
}

void CML2Accelerator::setJaw2X(G4double val)
{
    jaw2XAperture = val;
}

void CML2Accelerator::setJaw1Y(G4double val)
{
    jaw1YAperture = val;
}

void CML2Accelerator::setJaw2Y(G4double val)
{
    jaw2YAperture = val;
}

void CML2Accelerator::setIsoCentre(G4double val)
{
    isoCentre=val;
}

void CML2Accelerator::setidEnergy(G4int val)
{
    idEnergy=val;
}

void CML2Accelerator::setLeavesAx(G4double val)
{
    vec_leavesA.push_back(val);
}

void CML2Accelerator::setLeavesBx(G4double val)
{
    vec_leavesB.push_back(val);
}

int CML2Accelerator::getidEnergy()
{
    return idEnergy;
}











