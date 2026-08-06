// Generated header

class CStriderMinigun
{
public:
	virtual void GetDataDescMap(); // vtable[0]

	void GetBaseMap(); // size[7]
	void Init(); // size[154]
	void ShouldFindTarget(IMinigunHost *param_1); // size[172]
	void GetAimError(); // size[57]
	void AimAtPoint(IStriderMinigunHost *param_1, Vector *param_2, bool param_3); // size[462]
	void AimAtTarget(IStriderMinigunHost *param_1, CBaseEntity *param_2, bool param_3); // size[144]
	void StartShooting(IStriderMinigunHost *param_1, CBaseEntity *param_2, float param_3); // size[506]
	void ExtendShooting(float param_1); // size[52]
	void SetShootDuration(float param_1); // size[5]
	void IsPegged(int param_1); // size[155]
	void StopShootingForSeconds(IStriderMinigunHost *param_1, CBaseEntity *param_2, float param_3); // size[170]
	void SetState(int param_1); // size[14]
	void SetTarget(IStriderMinigunHost *param_1, CBaseEntity *param_2, bool param_3); // size[351]
	void ShootAtTarget(IStriderMinigunHost *param_1, CBaseEntity *param_2, float param_3); // size[246]
	void CanStartShooting(IStriderMinigunHost *param_1, CBaseEntity *param_2); // size[498]
	void Enable(IMinigunHost *param_1, bool param_2); // size[46]
	void Think(IStriderMinigunHost *param_1, float param_2); // size[1252]
};
