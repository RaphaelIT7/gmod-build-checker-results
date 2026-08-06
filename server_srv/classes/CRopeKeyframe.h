// Generated header

class CRopeKeyframe : public CBaseEntity, public IPositionWatcher
{
public:
	virtual void ~CRopeKeyframe() override; // vtable[0]
	virtual void _ZN13CRopeKeyframeD0Ev() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void NotifyPositionChanged(); // vtable[246]

	void _GLOBAL__sub_I_GetServerClass();
	void ~CRopeKeyframe();
	void ~CRopeKeyframe();
	void InputSetScrollSpeed();
	void InputSetLength();
	void GetBaseMap();
	void CRopeKeyframe();
	void EnablePlayerWeaponAttach();
	void ActivateStartDirectionConstraints();
	void ActivateEndDirectionConstraints();
	void ShakeRopes();
	void EndpointsChanged();
	void SetAttachmentPoint();
	void SetStartPoint();
	void SetEndPoint();
	void DieAtNextRest();
	void GetEndPointPos2();
	void GetEndPointPos();
	void GetEndPointPos();
	void SetupHangDistance();
	void RecalculateLength();
	void UpdateBBox();
	void Init();
	void NotifyPositionChanged();
	void PropagateForce();
	void InputSetForce();
	void Break();
	void InputBreak();
	void DetachPoint();
	void EnableCollision();
	void EnableWind();
	void SetMaterial();
	void Create();
	void CreateWithSecondPointDetached();
};
