
#pragma once

#include <vector>

#include "BlockLegacy.h"
#include "graphics/BlockPos.h"
#include "lib/SymHook.h"
#include "lib/mod.h"

namespace trapdoor {

    class BlockLegacy;

    class Block {
       public:
        // 获取方块legacy
        BlockLegacy* getLegacy();

        //获取方块名称(和item返回的名称不一样，不知道Mojang怎么想的)
        std::string getName();

        //获取特殊值
        int getVariant();
    };

    /*
     * 方块实体接口
     */
    class BlockActor {
       public:
        //获取位置
        BlockPos* getPosition();

        //获取方块对象
        //  Block *getBlock();
    };

}  // namespace trapdoor
typedef trapdoor::Block Block;
typedef trapdoor::BlockActor BlockActor;
