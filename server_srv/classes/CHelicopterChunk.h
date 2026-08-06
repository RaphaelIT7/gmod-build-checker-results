// Generated header

class CHelicopterChunk : public CBaseAnimating
{
public:
	virtual ~CHelicopterChunk() override; // vtable[0]
	virtual ~CHelicopterChunk() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void VPhysicsCollision() override; // vtable[165]

	void GetBaseMap(); // size[0]
	void StartFadeout(); // size[0]
	void FallThink(); // size[0]
	void CollisionCallback(); // size[0]
	void CreateHelicopterChunk(); // size[0]
};
