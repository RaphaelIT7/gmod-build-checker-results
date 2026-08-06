// Generated header

class CHelicopterChunk : public CBaseAnimating
{
public:
	virtual ~CHelicopterChunk() override; // vtable[0]
	virtual ~CHelicopterChunk() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]

	void GetBaseMap(); // size[10]
	void StartFadeout(); // size[59]
	void FallThink(); // size[414]
	void CollisionCallback(CHelicopterChunk *param_1); // size[242]
	void CreateHelicopterChunk(Vector *param_1, QAngle *param_2, Vector *param_3, char *param_4, int param_5); // size[89]
};
