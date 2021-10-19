#ifndef OBJ_PSZ2INTRO_H
#define OBJ_PSZ2INTRO_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int32 field_4;
    uint16 sfxExplosion3;
    EntityFXFade *fxFade;
    Entity *signPost;
} ObjectPSZ2Intro;

// Entity Class
typedef struct {
    MANIA_CUTSCENE_BASE
} EntityPSZ2Intro;

// Object Struct
extern ObjectPSZ2Intro *PSZ2Intro;

// Standard Entity Events
void PSZ2Intro_Update(void);
void PSZ2Intro_LateUpdate(void);
void PSZ2Intro_StaticUpdate(void);
void PSZ2Intro_Draw(void);
void PSZ2Intro_Create(void* data);
void PSZ2Intro_StageLoad(void);
void PSZ2Intro_EditorDraw(void);
void PSZ2Intro_EditorLoad(void);
void PSZ2Intro_Serialize(void);

// Extra Entity Functions
bool32 PSZ2Intro_CutsceneState_Unknown1(EntityCutsceneSeq *host);
bool32 PSZ2Intro_CutsceneState_Unknown2(EntityCutsceneSeq *host);
bool32 PSZ2Intro_CutsceneState_Unknown3(EntityCutsceneSeq *host);
bool32 PSZ2Intro_CutsceneState_Unknown4(EntityCutsceneSeq *host);

#endif //!OBJ_PSZ2INTRO_H
