extern "C" {
#include "z_bg_haka_megane.hpp"

#define FLAGS 0x004000B0

void BgHakaMegane_Init(Actor* actor, GameState* state);
void BgHakaMegane_Destroy(Actor* actor, GameState* state);
void BgHakaMegane_Update(Actor* actor, GameState* state);

/*
ActorInit Bg_Haka_Megane_InitVars = {
    ACTOR_BG_HAKA_MEGANE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgHakaMegane),
    (ActorFunc)BgHakaMegane_Init,
    (ActorFunc)BgHakaMegane_Destroy,
    (ActorFunc)BgHakaMegane_Update,
    (ActorFunc)NULL,
};
*/

GLOBAL_ASM("binary/BgHakaMegane_Init.o")

GLOBAL_ASM("binary/BgHakaMegane_Destroy.o")

GLOBAL_ASM("binary/BgHakaMegane_Update.o")
}
