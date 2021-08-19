#pragma  once
namespace SymHook{
   //[1]?_spawnStructureMob@Spawner@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z;
   //private: void __cdecl Spawner::_spawnStructureMob(class BlockSource & __ptr64,class BlockPos const & __ptr64,struct LevelChunk::HardcodedSpawningArea const & __ptr64,class SpawnConditions const & __ptr64) __ptr64
    constexpr uint64_t  Spawner_spawnStructureMob_98a1693e = 17967808;

   //[2]?displayLocalizableMessage@CommandUtils@@YAX_NAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z;
   //void __cdecl CommandUtils::displayLocalizableMessage(bool,class Player & __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const & __ptr64)
    constexpr uint64_t  CommandUtils_displayLocalizableMessage_24be62e9 = 7874224;

   //[3]?explode@Explosion@@QEAAXXZ;
   //public: void __cdecl Explosion::explode(void) __ptr64
    constexpr uint64_t  Explosion_explode_5adcea90 = 16272816;

   //[4]?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z;
   //public: virtual class Actor * __ptr64 __cdecl Level::fetchEntity(struct ActorUniqueID,bool)const __ptr64
    constexpr uint64_t  Level_fetchEntity_ff3466ce = 16289392;

   //[5]?findNextSpawnBlockUnder@Spawner@@SA_NAEBVBlockSource@@AEAVBlockPos@@W4MaterialType@@W4SpawnBlockRequirements@@@Z;
   //public: static bool __cdecl Spawner::findNextSpawnBlockUnder(class BlockSource const & __ptr64,class BlockPos & __ptr64,enum MaterialType,enum SpawnBlockRequirements)
    constexpr uint64_t  Spawner_findNextSpawnBlockUnder_65b36c80 = 17975872;

   //[6]?forEachBlock@BlockTypeRegistry@@SAXV?$function@$$A6A_NAEBVBlockLegacy@@@Z@std@@@Z;
   //public: static void __cdecl BlockTypeRegistry::forEachBlock(class std::function<bool __cdecl(class BlockLegacy const & __ptr64)>)
    constexpr uint64_t  BlockTypeRegistry_forEachBlock_7f891f2d = 15793840;

   //[7]?getApproximateRadius@Village@@QEBAMXZ;
   //public: float __cdecl Village::getApproximateRadius(void)const __ptr64
    constexpr uint64_t  Village_getApproximateRadius_626d2648 = 14299920;

   //[8]?getBaseComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z;
   //public: class BaseCircuitComponent * __ptr64 __cdecl CircuitSceneGraph::getBaseComponent(class BlockPos const & __ptr64) __ptr64
    constexpr uint64_t  CircuitSceneGraph_getBaseComponent_c4a5dbac = 17229968;

   //[9]?getBedPOICount@Village@@QEBA_KXZ;
   //public: unsigned __int64 __cdecl Village::getBedPOICount(void)const __ptr64
    constexpr uint64_t  Village_getBedPOICount_016a7e2f = 14300288;

   //[10]?getBiome@BlockSource@@QEAAAEAVBiome@@AEBVBlockPos@@@Z;
   //public: class Biome & __ptr64 __cdecl BlockSource::getBiome(class BlockPos const & __ptr64) __ptr64
    constexpr uint64_t  BlockSource_getBiome_967864de = 16298896;

   //[11]?getBiomeType@Biome@@QEBA?AW4VanillaBiomeTypes@@XZ;
   //public: enum VanillaBiomeTypes __cdecl Biome::getBiomeType(void)const __ptr64
    constexpr uint64_t  Biome_getBiomeType_bb099b78 = 17976832;

   //[12]?getBlock@BlockSource@@QEBAAEBVBlock@@AEBVBlockPos@@@Z;
   //public: class Block const & __ptr64 __cdecl BlockSource::getBlock(class BlockPos const & __ptr64)const __ptr64
    constexpr uint64_t  BlockSource_getBlock_fd731636 = 16299152;

   //[13]?getCommandPermissionLevel@Player@@UEBA?AW4CommandPermissionLevel@@XZ;
   //public: virtual enum CommandPermissionLevel __cdecl Player::getCommandPermissionLevel(void)const __ptr64
    constexpr uint64_t  Player_getCommandPermissionLevel_40b0e608 = 12558592;

   //[14]?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z;
   //public: virtual void __cdecl Actor::getDebugText(class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > & __ptr64) __ptr64
    constexpr uint64_t  Actor_getDebugText_f04fad6b = 12191984;

   //[15]?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z;
   //public: virtual class Dimension * __ptr64 __cdecl Level::getDimension(class AutomaticID<class Dimension,int>)const __ptr64
    constexpr uint64_t  Level_getDimension_6fab9459 = 16301664;

   //[16]?getHash@NetworkIdentifier@@QEBA_KXZ;
   //public: unsigned __int64 __cdecl NetworkIdentifier::getHash(void)const __ptr64
    constexpr uint64_t  NetworkIdentifier_getHash_d932dec8 = 7063168;

   //[17]?getMobToSpawn@BlockLegacy@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z;
   //public: virtual class MobSpawnerData const * __ptr64 __cdecl BlockLegacy::getMobToSpawn(class SpawnConditions const & __ptr64,class BlockSource & __ptr64)const __ptr64
    constexpr uint64_t  BlockLegacy_getMobToSpawn_dd8ce374 = 17453008;

   //[18]?getName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ;
   //public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl ItemStackBase::getName(void)const __ptr64
    constexpr uint64_t  ItemStackBase_getName_6d581a35 = 13136144;

   //[19]?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ;
   //public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64 __cdecl Actor::getNameTag(void)const __ptr64
    constexpr uint64_t  Actor_getNameTag_7044ab83 = 12202592;

   //[20]?getPos@Actor@@UEBAAEBVVec3@@XZ;
   //public: virtual class Vec3 const & __ptr64 __cdecl Actor::getPos(void)const __ptr64
    constexpr uint64_t  Actor_getPos_cecb628b = 12203456;

   //[21]?getViewVector@Actor@@QEBA?AVVec3@@M@Z;
   //public: class Vec3 __cdecl Actor::getViewVector(float)const __ptr64
    constexpr uint64_t  Actor_getViewVector_01c92121 = 12207328;

   //[22]?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z;
   //public: virtual void __cdecl ServerNetworkHandler::handle(class NetworkIdentifier const & __ptr64,class CommandRequestPacket const & __ptr64) __ptr64
    constexpr uint64_t  ServerNetworkHandler_handle_1a4c2996 = 7256048;

   //[23]?processPendingAdds@CircuitSceneGraph@@AEAAXXZ;
   //private: void __cdecl CircuitSceneGraph::processPendingAdds(void) __ptr64
    constexpr uint64_t  CircuitSceneGraph_processPendingAdds_9d2954e5 = 17235952;

   //[24]?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z;
   //public: void __cdecl CommandRegistry::registerCommand(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64,char const * __ptr64,enum CommandPermissionLevel,struct CommandFlag,struct CommandFlag) __ptr64
    constexpr uint64_t  CommandRegistry_registerCommand_8574de98 = 7947904;

   //[25]?removeComponent@CircuitSceneGraph@@AEAAXAEBVBlockPos@@@Z;
   //private: void __cdecl CircuitSceneGraph::removeComponent(class BlockPos const & __ptr64) __ptr64
    constexpr uint64_t  CircuitSceneGraph_removeComponent_1f06081d = 17239776;

   //[26]?setBlock@BlockSource@@QEAA_NHHHAEBVBlock@@H@Z;
   //public: bool __cdecl BlockSource::setBlock(int,int,int,class Block const & __ptr64,int) __ptr64
    constexpr uint64_t  BlockSource_setBlock_71ce9a25 = 16363632;

   //[27]?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z;
   //public: virtual void __cdecl HopperBlockActor::setItem(int,class ItemStack const & __ptr64) __ptr64
    constexpr uint64_t  HopperBlockActor_setItem_c0e5f3ce = 17769696;

   //[28]?setNameTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z;
   //public: virtual void __cdecl Actor::setNameTag(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
    constexpr uint64_t  Actor_setNameTag_2f9772d3 = 12318512;

   //[29]?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z;
   //public: virtual void __cdecl ServerPlayer::setPlayerGameType(enum GameType) __ptr64
    constexpr uint64_t  ServerPlayer_setPlayerGameType_058d8c73 = 7971520;

   //[30]?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z;
   //public: virtual void __cdecl Level::spawnParticleEffect(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64,class Vec3 const & __ptr64,class Dimension * __ptr64) __ptr64
    constexpr uint64_t  Level_spawnParticleEffect_52e7de09 = 16368672;

   //[31]?tick@Actor@@QEAA_NAEAVBlockSource@@@Z;
   //public: bool __cdecl Actor::tick(class BlockSource & __ptr64) __ptr64
    constexpr uint64_t  Actor_tick_8589defc = 12347424;

   //[32]?tick@Dimension@@UEAAXXZ;
   //public: virtual void __cdecl Dimension::tick(void) __ptr64
    constexpr uint64_t  Dimension_tick_39d89862 = 16802224;

   //[33]?tick@LevelChunk@@QEAAXAEAVBlockSource@@AEBUTick@@@Z;
   //public: void __cdecl LevelChunk::tick(class BlockSource & __ptr64,struct Tick const & __ptr64) __ptr64
    constexpr uint64_t  LevelChunk_tick_9d729ccd = 16099216;

   //[34]?tick@ServerLevel@@UEAAXXZ;
   //public: virtual void __cdecl ServerLevel::tick(void) __ptr64
    constexpr uint64_t  ServerLevel_tick_86efb826 = 7982512;

   //[35]?tick@Village@@QEAAXUTick@@AEAVBlockSource@@@Z;
   //public: void __cdecl Village::tick(struct Tick,class BlockSource & __ptr64) __ptr64
    constexpr uint64_t  Village_tick_2a1ecbf8 = 14329072;

   //[36]?tickBlockEntities@LevelChunk@@QEAAXAEAVBlockSource@@@Z;
   //public: void __cdecl LevelChunk::tickBlockEntities(class BlockSource & __ptr64) __ptr64
    constexpr uint64_t  LevelChunk_tickBlockEntities_41f9b2ca = 16101888;

   //[37]?tickBlocks@LevelChunk@@QEAAXAEAVBlockSource@@@Z;
   //public: void __cdecl LevelChunk::tickBlocks(class BlockSource & __ptr64) __ptr64
    constexpr uint64_t  LevelChunk_tickBlocks_66280c26 = 16102736;

   //[38]?tickEntitySystems@Level@@UEAAXXZ;
   //public: virtual void __cdecl Level::tickEntitySystems(void) __ptr64
    constexpr uint64_t  Level_tickEntitySystems_251e10ba = 16376672;

   //[39]?tickPendingTicks@BlockTickingQueue@@QEAA_NAEAVBlockSource@@AEBUTick@@H_N@Z;
   //public: bool __cdecl BlockTickingQueue::tickPendingTicks(class BlockSource & __ptr64,struct Tick const & __ptr64,int,bool) __ptr64
    constexpr uint64_t  BlockTickingQueue_tickPendingTicks_e4625213 = 16377088;

   //[40]?tickRedstone@Dimension@@UEAAXXZ;
   //public: virtual void __cdecl Dimension::tickRedstone(void) __ptr64
    constexpr uint64_t  Dimension_tickRedstone_c8a7e6e5 = 16803120;

   //[41]?tickWorld@ServerPlayer@@UEAAHAEBUTick@@@Z;
   //public: virtual int __cdecl ServerPlayer::tickWorld(struct Tick const & __ptr64) __ptr64
    constexpr uint64_t  ServerPlayer_tickWorld_806481d7 = 7983072;

   //[42]?toDebugString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ;
   //public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl Block::toDebugString(void)const __ptr64
    constexpr uint64_t  Block_toDebugString_522cb860 = 17487616;

   //[43]?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G@Z;
   //public: class Block const * __ptr64 __cdecl BlockLegacy::tryGetStateFromLegacyData(unsigned short)const __ptr64
    constexpr uint64_t  BlockLegacy_tryGetStateFromLegacyData_ad225111 = 17491888;

   //[44]?updateNeighborsAt@BlockSource@@QEAAXAEBVBlockPos@@@Z;
   //public: void __cdecl BlockSource::updateNeighborsAt(class BlockPos const & __ptr64) __ptr64
    constexpr uint64_t  BlockSource_updateNeighborsAt_4c3f8cf7 = 16382352;

   //[45]?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEMMM@Z;
   //public: bool __cdecl Item::useOn(class ItemStack & __ptr64,class Actor & __ptr64,int,int,int,unsigned char,float,float,float)const __ptr64
    constexpr uint64_t  Item_useOn_35e33f80 = 14897312;

}
