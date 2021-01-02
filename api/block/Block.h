#pragma once

#include "lib/mod.h"
#include "lib/SymHook.h"
#include "graphics/BlockPos.h"
#include "BlockLegacy.h"
#include <vector>

struct Biome;


namespace trapdoor {
/*
 * 方块接口
 */
    class BlockLegacy;

    class Block {
    public:
        // 获取方块legacy
        BlockLegacy *getLegacy();

        //获取方块名称(和item返回的名称不一样，不知道Mojang怎么想的)
        std::string getName();

        //获取特殊值
        int getVariant();

        //是否是空气
        bool isAir();
    };

/*
 * 方块实体接口
 */
    class BlockActor {
    public:
        //获取位置
        BlockPos *getPosition();

        //获取方块对象
        Block *getBlock();
    };

/*
 * 红石组件接口
 */
    class BaseCircuitComponent {
    public:
        int getStrength();

        int getVar2();

        int getPowerCount();

        int getAcceptHalfPulse();

        int getHalfPulse();

        void basePrint();

        void printRepeater();

        void printTorch(BlockPos blockPos);
    };

    //红石电路图组件
    class CircuitSceneGraph {
    public:
        BaseCircuitComponent *getBaseCircuitComponent(BlockPos *pos);
    };

}


