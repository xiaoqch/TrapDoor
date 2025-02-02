//
// Created by xhy on 2020/12/23.
//

#include "BDSMod.h"
#include "TrapdoorMod.h"
#include "lib/SymHook.h"
#include "lib/mod.h"

namespace mod {
    using namespace SymHook;

    THook(void, Explosion_explode_5adcea90, void *exp) {
        auto modInstance = trapdoor::bdsMod->asInstance<mod::TrapdoorMod>();
        if (!modInstance->getSingFunction().preventExplosion) original(exp);
    }

    /**
     *  SYM_CALL(
                void(*)(BlockSource * self,const BlockPos *pos),
                MSSYM_B1QE17updateNeighborsAtB1AE11BlockSourceB2AAE17QEAAXAEBVBlockPosB3AAAA1Z,
                this, pos
        );
     */

    THook(void, BlockSource_updateNeighborsAt_4c3f8cf7,
          trapdoor::BlockSource *source, trapdoor::BlockPos *pos) {
        auto modInstance = trapdoor::bdsMod->asInstance<mod::TrapdoorMod>();
        if (!modInstance->getSingFunction().preventNCUpdate)
            original(source, pos);
    }
}  // namespace mod