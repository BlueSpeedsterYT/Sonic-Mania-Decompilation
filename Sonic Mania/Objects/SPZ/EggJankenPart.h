#ifndef OBJ_EGGJANKENPART_H
#define OBJ_EGGJANKENPART_H

#include "SonicMania.h"

// Object Class
struct ObjectEggJankenPart {
    RSDK_OBJECT
    uint16 aniFrames;
};

// Entity Class
struct EntityEggJankenPart {
    RSDK_ENTITY
    Animator animator;
};

// Object Entity
extern ObjectEggJankenPart *EggJankenPart;

// Standard Entity Events
void EggJankenPart_Update(void);
void EggJankenPart_LateUpdate(void);
void EggJankenPart_StaticUpdate(void);
void EggJankenPart_Draw(void);
void EggJankenPart_Create(void* data);
void EggJankenPart_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void EggJankenPart_EditorDraw(void);
void EggJankenPart_EditorLoad(void);
#endif
void EggJankenPart_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_EGGJANKENPART_H
