extern "C" {
#include "z_en_toryo.hpp"

#define FLAGS 0x00000009

void EnToryo_Init(Actor* actor, GameState* state);
void EnToryo_Destroy(Actor* actor, GameState* state);
void EnToryo_Update(Actor* actor, GameState* state);
void EnToryo_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Toryo_InitVars = {
    ACTOR_EN_TORYO,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TORYO,
    sizeof(EnToryo),
    (ActorFunc)EnToryo_Init,
    (ActorFunc)EnToryo_Destroy,
    (ActorFunc)EnToryo_Update,
    (ActorFunc)EnToryo_Draw,
};
*/
}