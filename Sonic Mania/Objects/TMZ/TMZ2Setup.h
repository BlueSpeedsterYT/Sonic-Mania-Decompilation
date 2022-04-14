#ifndef OBJ_TMZ2SETUP_H
#define OBJ_TMZ2SETUP_H

#include "SonicMania.h"

typedef enum { TMZ2_WARPDOOR_EFFECT_MIST = 1 } TMZ2WarpDoorEffects;

// Object Class
struct ObjectTMZ2Setup {
    RSDK_OBJECT
    bool32 paletteInit;
    int32 palDelay;
    int32 palTimer;
    int32 unused1;
    int32 unused2;
    uint16 aniTiles;
    uint16 dynTiles;
};

// Entity Class
struct EntityTMZ2Setup {
	RSDK_ENTITY
};

// Object Struct
extern ObjectTMZ2Setup *TMZ2Setup;

// Standard Entity Events
void TMZ2Setup_Update(void);
void TMZ2Setup_LateUpdate(void);
void TMZ2Setup_StaticUpdate(void);
void TMZ2Setup_Draw(void);
void TMZ2Setup_Create(void* data);
void TMZ2Setup_StageLoad(void);
void TMZ2Setup_EditorDraw(void);
void TMZ2Setup_EditorLoad(void);
void TMZ2Setup_Serialize(void);

// Extra Entity Functions
void TMZ2Setup_DrawLayerCB_A(void);
void TMZ2Setup_DrawLayerCB_B(void);

void TMZ2_DrawDynTiles_Eggman(void);
void TMZ2_DrawDynTiles_Ruby(void);

#endif //!OBJ_TMZ2SETUP_H
