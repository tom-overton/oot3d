extern "C" {
#include "z_bg_hidan_sima.hpp"

#define FLAGS 0x80400010

void BgHidanSima_Init(Actor* actor, GameState* state);
void BgHidanSima_Destroy(Actor* actor, GameState* state);
void BgHidanSima_Update(Actor* actor, GameState* state);
void BgHidanSima_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Hidan_Sima_InitVars = {
    ACTOR_BG_HIDAN_SIMA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanSima),
    (ActorFunc)BgHidanSima_Init,
    (ActorFunc)BgHidanSima_Destroy,
    (ActorFunc)BgHidanSima_Update,
    (ActorFunc)BgHidanSima_Draw,
};
*/
}