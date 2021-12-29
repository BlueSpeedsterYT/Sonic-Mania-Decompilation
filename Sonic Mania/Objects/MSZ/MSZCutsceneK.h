#ifndef OBJ_MSZCUTSCENEK_H
#define OBJ_MSZCUTSCENEK_H

#include "SonicMania.h"

// Object Class
struct ObjectMSZCutsceneK {
    RSDK_OBJECT
    int32 field_4;
    uint16 playerFrames;
    uint16 sfxImpact;
    uint16 sfxDrop;
    Vector2 pos1;
    Vector2 pos2;
    Vector2 pos3;
    Entity *tornado;
    Entity *mystic;
};

// Entity Class
struct EntityMSZCutsceneK {
	MANIA_CUTSCENE_BASE
};

// Object Struct
extern ObjectMSZCutsceneK *MSZCutsceneK;

// Standard Entity Events
void MSZCutsceneK_Update(void);
void MSZCutsceneK_LateUpdate(void);
void MSZCutsceneK_StaticUpdate(void);
void MSZCutsceneK_Draw(void);
void MSZCutsceneK_Create(void* data);
void MSZCutsceneK_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void MSZCutsceneK_EditorDraw(void);
void MSZCutsceneK_EditorLoad(void);
#endif
void MSZCutsceneK_Serialize(void);

// Extra Entity Functions
#if RETRO_USE_PLUS
void MSZCutsceneK_SkipCB(void);
#endif
void MSZCutsceneK_StartCutscene(void);
void MSZCutsceneK_SetupP2(int posX, int posY);

bool32 MSZCutsceneK_Cutscene_RidingTornado(EntityCutsceneSeq *host);
bool32 MSZCutsceneK_Cutscene_KnockedOffTornado(EntityCutsceneSeq *host);

#endif //!OBJ_MSZCUTSCENEK_H
