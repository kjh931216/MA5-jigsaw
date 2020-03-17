#include "SampleAnalyzer/User/Analyzer/ATLAS_SUSY_2018_06.h"
#include "SampleAnalyzer/Process/Analyzer/AnalyzerManager.h"
#include "SampleAnalyzer/Commons/Service/LogStream.h"

// -----------------------------------------------------------------------------
// BuildTable
// -----------------------------------------------------------------------------
void BuildUserTable(MA5::AnalyzerManager& manager)
{
  using namespace MA5;
  manager.Add("ATLAS_SUSY_2018_06",new ATLAS_SUSY_2018_06);
}
