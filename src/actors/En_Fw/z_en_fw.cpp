extern "C" {
#include "z_en_fw.hpp"

#define FLAGS 0x00000215

void EnFw_Init(Actor* actor, GameState* state);
void EnFw_Destroy(Actor* actor, GameState* state);
void EnFw_Update(Actor* actor, GameState* state);
void EnFw_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Fw_InitVars = {
    ACTOR_EN_FW,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_FW,
    sizeof(EnFw),
    (ActorFunc)EnFw_Init,
    (ActorFunc)EnFw_Destroy,
    (ActorFunc)EnFw_Update,
    (ActorFunc)EnFw_Draw,
};
*/
}