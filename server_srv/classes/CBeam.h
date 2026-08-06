// Generated header

class CBeam : public CBaseEntity
{
public:
	virtual void ~CBeam() override; // vtable[0]
	virtual void ~CBeam() override; // vtable[1]
	virtual void GetDecalName(); // vtable[246]

	void InputNoise();
	void InputWidth();
	void InputColorBlueValue();
	void InputColorGreenValue();
	void InputColorRedValue();
	void GetBaseMap();
	void CBeam();
	void SetType();
	void SetBeamFlags();
	void SetBeamFlag();
	void GetType();
	void GetBeamFlags();
	void SetAbsStartPos();
	void SetAbsEndPos();
	void GetAbsStartPos();
	void GetAbsEndPos();
	void BeamInit();
	void BeamCreate();
	void BeamCreatePredictable();
	void RelinkBeam();
	void SetStartEntity();
	void SetEndEntity();
	void PointsInit();
	void HoseInit();
	void PointEntInit();
	void EntsInit();
	void LaserInit();
	void SplineInit();
	void RandomTargetname();
	void DoSparks();
	void BeamDamage();
	void TurnOn();
	void TurnOff();
	void SetBrightness();
};
