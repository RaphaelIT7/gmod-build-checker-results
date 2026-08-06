// Generated header

class CFuncCombineBallSpawner : public CBaseEntity
{
public:
	virtual void ~CFuncCombineBallSpawner() override; // vtable[0]
	virtual void ~CFuncCombineBallSpawner() override; // vtable[1]
	virtual void _ZN23CFuncCombineBallSpawner14GetDataDescMapEv() override; // vtable[12]
	virtual void SpawnBall(); // vtable[246]

	void BallThink();
	void InputEnable();
	void InputDisable();
	void InputDisable();
	void GetBaseMap();
	void CFuncCombineBallSpawner();
	void ChoosePointInBox();
	void ChoosePointInCylinder();
	void RegisterReflection();
	void GetTargetEndpoint();
	void BallGrabbed();
	void GetBallSpeed();
	void RespawnBall();
	void RespawnBallPostExplosion();
	void GrabBallTouch();
};
