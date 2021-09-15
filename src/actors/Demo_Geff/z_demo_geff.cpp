extern "C" {
#include "z_demo_geff.hpp"

#define FLAGS 0x00000030

void DemoGeff_Init(Actor* actor, GameState* state);
void DemoGeff_Destroy(Actor* actor, GameState* state);
void DemoGeff_Update(Actor* actor, GameState* state);
void DemoGeff_Draw(Actor* actor, GameState* state);

/*
ActorInit Demo_Geff_InitVars = {
    ACTOR_DEMO_GEFF,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GEFF,
    sizeof(DemoGeff),
    (ActorFunc)DemoGeff_Init,
    (ActorFunc)DemoGeff_Destroy,
    (ActorFunc)DemoGeff_Update,
    (ActorFunc)DemoGeff_Draw,
};
*/
}