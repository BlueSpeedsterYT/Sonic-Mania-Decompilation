#ifndef OBJ_PARTICLEHELPERS_H
#define OBJ_PARTICLEHELPERS_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectParticleHelpers;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityParticleHelpers;

// Object Entity
extern ObjectParticleHelpers *ParticleHelpers;

// Standard Entity Events
void ParticleHelpers_Update(void);
void ParticleHelpers_LateUpdate(void);
void ParticleHelpers_StaticUpdate(void);
void ParticleHelpers_Draw(void);
void ParticleHelpers_Create(void* data);
void ParticleHelpers_StageLoad(void);
void ParticleHelpers_EditorDraw(void);
void ParticleHelpers_EditorLoad(void);
void ParticleHelpers_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_PARTICLEHELPERS_H