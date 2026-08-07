// Generated header

class CFuncCombineBallSpawner : public CBaseEntity
{
public:
	virtual ~CFuncCombineBallSpawner() override; // vtable[0]
	virtual ~CFuncCombineBallSpawner() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SpawnBall(); // vtable[246]

	void BallThink(); // size[175]
	void InputEnable(inputdata_t *param_1); // size[169]
	void InputDisable(inputdata_t *param_1); // size[158]
	void InputDisable(inputdata_t *param_1); // size[23]
	CFuncCombineBallSpawner(); // size[26]
	void ChoosePointInBox(Vector *param_1); // size[963]
	void ChoosePointInCylinder(Vector *param_1); // size[258]
	void RegisterReflection(CPropCombineBall *param_1, bool param_2); // size[60]
	void GetTargetEndpoint(bool param_1, Vector *param_2); // size[100]
	void BallGrabbed(CBaseEntity *param_1); // size[44]
	void GetBallSpeed(); // size[52]
	void RespawnBall(float param_1); // size[85]
	void RespawnBallPostExplosion(); // size[155]
	void GrabBallTouch(CBaseEntity *param_1); // size[78]
};
