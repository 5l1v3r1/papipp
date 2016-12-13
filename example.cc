#include "papipp.h"

#include <vector>
#include <algorithm>

int main()
{
    {
        papi::event_set<PAPI_TOT_INS, PAPI_TOT_CYC, PAPI_BR_MSP> instr_events;
        instr_events.start_counters();

        std::vector<int> v = {{11, 7, 5, 3, 1}};
        std::sort(std::begin(v), std::end(v));

        instr_events.stop_counters();
    }

#if 0
    {
        using cache_events = event_set<PAPI_L1_DCM, PAPI_L2_DCM, PAPI_L3_TCM>;
    }
#endif
}
