/* Include files */

#include "Top_Level_Simulation_cgxe.h"
#include "m_dnGfh1DX0a11xSfGnyzF5G.h"

unsigned int cgxe_Top_Level_Simulation_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 2317323334 &&
      ssGetChecksum1(S) == 1933463703 &&
      ssGetChecksum2(S) == 4087422418 &&
      ssGetChecksum3(S) == 4210197064) {
    method_dispatcher_dnGfh1DX0a11xSfGnyzF5G(S, method, data);
    return 1;
  }

  return 0;
}
