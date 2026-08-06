// Generated header

class CFuncCombineBallSpawner : public CBaseEntity
{
public:
	virtual ~CFuncCombineBallSpawner() override; // vtable[0]
	virtual ~CFuncCombineBallSpawner() override; // vtable[1]
	virtual void _ZN23CFuncCombineBallSpawner14GetDataDescMapEv() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SpawnBall(); // vtable[246]

	void BallThink(); // size[0]
	void InputEnable(); // size[0]
	void InputDisable(); // size[0]
	void InputDisable(); // size[0]
	void GetBaseMap(); // size[0]
	CFuncCombineBallSpawner(); // size[0]
	void ChoosePointInBox(); // size[0]
	void ChoosePointInCylinder(); // size[0]
	void RegisterReflection(); // size[0]
	void GetTargetEndpoint(); // size[0]
	void BallGrabbed(); // size[0]
	void GetBallSpeed(); // size[0]
	void RespawnBall(); // size[0]
	void RespawnBallPostExplosion(); // size[0]
	void GrabBallTouch(); // size[0]
};
