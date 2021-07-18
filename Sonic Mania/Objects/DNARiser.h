#ifndef OBJ_DNARISER_H
#define OBJ_DNARISER_H

#include "../SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    ushort aniFrames;
    ushort sfxGrab;
    ushort sfxScan;
    ushort sfxBurst;
    ushort sfxTiny[6];
    Hitbox hitbox;
} ObjectDNARiser;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    StateMachine(stateDraw);
    int field_60;
    bool32 popped;
    Vector2 popPos;
    int field_70;
    Animator animator2;
    Animator animator;
    ushort field_A4;
    short timer;
    byte field_A8;
    int field_AC;
    int field_B0;
    ushort timer2;
    char field_B6;
    char field_B7;
    int height;
    Vector2 speed;
    byte activePlayers;
    int curHeight;
    int field_CC;
    Vector2 vector_D0;
    Vector2 vector_D8;
    ushort field_E0;
    Entity* field_E4;
    Entity *child;
    Entity* field_EC;
    Entity *field_F0;
    Entity *parent;
} EntityDNARiser;

// Object Struct
extern ObjectDNARiser *DNARiser;

// Standard Entity Events
void DNARiser_Update(void);
void DNARiser_LateUpdate(void);
void DNARiser_StaticUpdate(void);
void DNARiser_Draw(void);
void DNARiser_Create(void* data);
void DNARiser_StageLoad(void);
void DNARiser_EditorDraw(void);
void DNARiser_EditorLoad(void);
void DNARiser_Serialize(void);

// Extra Entity Functions
void DNARiser_State_BubbleBurst(void);
void DNARiser_State_Burst_Helix(void);
Vector2 DNARiser_CalculateScale(Vector2 *vec);
void DNARiser_State_Setup(void);
void DNARiser_HandleInteractions(void);
void DNARiser_State_Unknown3(void);
void DNARiser_State_Unknown4(void);
void DNARiser_State_Unknown5(void);
void DNARiser_State_SetupChild(void);
void DNARiser_State_None(void);
void DNARiser_State_Unknown8(void);

void DNARiser_StateDraw_Main(void);
void DNARiser_StateDraw_Helix(void);

#endif //!OBJ_DNARISER_H
