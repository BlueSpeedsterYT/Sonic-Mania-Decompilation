#include "SonicMania.h"

ObjectBGSwitch *BGSwitch;

void BGSwitch_Update(void)
{
    RSDK_THIS(BGSwitch);

    for (BGSwitch->screenID = 0; BGSwitch->screenID < SCREEN_MAX; BGSwitch->screenID++) {
        EntityCamera *camera = (EntityCamera *)RSDK.GetEntityByID(BGSwitch->screenID + SLOT_CAMERA1);
        if (!camera->objectID)
            break;

        if (abs(camera->position.x - entity->position.x) < entity->size.x && abs(camera->position.y - entity->position.y) < entity->size.y) {
            if (entity->bgID < LAYER_COUNT)
                BGSwitch->layerIDs[BGSwitch->screenID] = entity->bgID;
        }

        int32 id = BGSwitch->layerIDs[BGSwitch->screenID];
        if (id != BGSwitch->layerIDs[BGSwitch->screenID + 4]) {
            BGSwitch->layerIDs[BGSwitch->screenID + 4] = id;
            StateMachine_Run(BGSwitch->switchCallback[id]);
        }
    }
}

void BGSwitch_LateUpdate(void) {}

void BGSwitch_StaticUpdate(void) {}

void BGSwitch_Draw(void) {}

void BGSwitch_Create(void *data)
{
    RSDK_THIS(BGSwitch);
    if (!RSDK_sceneInfo->inEditor) {
        entity->updateRange.x = entity->size.x;
        entity->updateRange.y = entity->size.y;
        entity->active        = ACTIVE_BOUNDS;
    }
}

void BGSwitch_StageLoad(void)
{
    BGSwitch->layerIDs[4] = -1;
    BGSwitch->layerIDs[5] = -1;
    BGSwitch->layerIDs[6] = -1;
    BGSwitch->layerIDs[7] = -1;
}

void BGSwitch_EditorDraw(void)
{
    RSDK_THIS(BGSwitch);
    RSDK.SetSpriteAnimation(BGSwitch->aniFrames, 0, &entity->animator, true, 5);
    RSDK.DrawSprite(&entity->animator, NULL, false);

    //Bounds
    Vector2 drawPos;

    drawPos.x = entity->position.x;
    drawPos.y = entity->position.y;
    drawPos.x -= entity->size.x >> 1;
    drawPos.y -= entity->size.y >> 1;
    RSDK.DrawLine(drawPos.x - 0x10000, drawPos.y - 0x10000, drawPos.x + entity->size.x, drawPos.y - 0x10000, 0xE0E0E0, 0, INK_NONE, 0);
    RSDK.DrawLine(drawPos.x - 0x10000, entity->size.y + drawPos.y, drawPos.x + entity->size.x, entity->size.y + drawPos.y, 0xE0E0E0, 0, INK_NONE,
                  false);
    RSDK.DrawLine(drawPos.x - 0x10000, drawPos.y - 0x10000, drawPos.x - 0x10000, drawPos.y + entity->size.y, 0xE0E0E0, 0, INK_NONE, 0);
    RSDK.DrawLine(drawPos.x + entity->size.x, drawPos.y - 0x10000, drawPos.x + entity->size.x, drawPos.y + entity->size.y, 0xE0E0E0, 0, INK_NONE,
                  false);
}

void BGSwitch_EditorLoad(void) { BGSwitch->aniFrames = RSDK.LoadSpriteAnimation("Editor/EditorIcons.bin", SCOPE_STAGE); }

void BGSwitch_Serialize(void)
{
    RSDK_EDITABLE_VAR(BGSwitch, VAR_VECTOR2, size);
    RSDK_EDITABLE_VAR(BGSwitch, VAR_UINT8, bgID);
}
