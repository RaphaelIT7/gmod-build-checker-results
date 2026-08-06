// Generated header

class CFuncTrackTrain : public CBaseEntity
{
public:
	virtual void ~CFuncTrackTrain() override; // vtable[0]
	virtual void ~CFuncTrackTrain() override; // vtable[1]
	virtual void _ZN15CFuncTrackTrain8KeyValueEPKcS1_() override; // vtable[30]
	virtual void _ZN15CFuncTrackTrain3UseEP11CBaseEntityS1_8USE_TYPEf() override; // vtable[100]

	void InputSetMaxSpeed();
	void DeadEnd();
	void InputUnlockOrientation();
	void InputLockOrientation();
	void GetBaseMap();
	void CFuncTrackTrain();
	void IsDirForward();
	void SetDirForward();
	void GetTrainVelocityType();
	void UpdateTrainVelocity();
	void GetTrainOrientationType();
	void DoUpdateOrientation();
	void UpdateOrientationBlend();
	void UpdateOrientationAtPathTracks();
	void UpdateTrainOrientation();
	void TeleportToPathTrack();
	void InputTeleportToPathTrack();
	void FirePassInputs();
	void SetControls();
	void Instance();
	void SoundStop();
	void Stop();
	void InputStop();
	void Next();
	void Start();
	void InputResume();
	void SetSpeed();
	void InputReverse();
	void InputStartForward();
	void InputStartBackward();
	void InputToggle();
	void InputSetSpeedReal();
	void InputSetSpeed();
	void InputSetSpeedDir();
	void InputMoveToPathNode();
	void SetSpeedDirAccel();
	void InputSetSpeedDirAccel();
	void SetSpeedForwardModifier();
	void InputSetSpeedForwardModifier();
	void ArriveAtNode();
	void InputTeleportToPathNode();
	void Find();
};
