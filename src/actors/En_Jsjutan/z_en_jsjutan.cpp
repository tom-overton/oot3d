extern "C" {
#include "z_en_jsjutan.hpp"

#define FLAGS 0x80000009

void EnJsjutan_Init(Actor* actor, GameState* state);
void EnJsjutan_Destroy(Actor* actor, GameState* state);
void EnJsjutan_Update(Actor* actor, GameState* state);

/*
ActorInit En_Jsjutan_InitVars = {
    ACTOR_EN_JSJUTAN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnJsjutan),
    (ActorFunc)EnJsjutan_Init,
    (ActorFunc)EnJsjutan_Destroy,
    (ActorFunc)EnJsjutan_Update,
    (ActorFunc)NULL,
};
*/

GLOBAL_ASM("binary/EnJsjutan_Init.o")

GLOBAL_ASM("binary/EnJsjutan_Destroy.o")

GLOBAL_ASM("binary/EnJsjutan_Update.o")
}
