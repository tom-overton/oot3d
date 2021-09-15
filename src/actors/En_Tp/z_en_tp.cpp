extern "C" {
#include "z_en_tp.hpp"

#define FLAGS 0x00000000

void EnTp_Init(Actor* actor, GameState* state);
void EnTp_Destroy(Actor* actor, GameState* state);
void EnTp_Update(Actor* actor, GameState* state);
void EnTp_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Tp_InitVars = {
    ACTOR_EN_TP,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_TP,
    sizeof(EnTp),
    (ActorFunc)EnTp_Init,
    (ActorFunc)EnTp_Destroy,
    (ActorFunc)EnTp_Update,
    (ActorFunc)EnTp_Draw,
};
*/
}