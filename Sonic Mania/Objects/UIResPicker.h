#ifndef OBJ_UIRESPICKER_H
#define OBJ_UIRESPICKER_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectUIResPicker;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityUIResPicker;

// Object Struct
extern ObjectUIResPicker *UIResPicker;

// Standard Entity Events
void UIResPicker_Update(void);
void UIResPicker_LateUpdate(void);
void UIResPicker_StaticUpdate(void);
void UIResPicker_Draw(void);
void UIResPicker_Create(void* data);
void UIResPicker_StageLoad(void);
void UIResPicker_EditorDraw(void);
void UIResPicker_EditorLoad(void);
void UIResPicker_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_UIRESPICKER_H