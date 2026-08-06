// Generated header

class CGrabController : public IMotionEvent
{
public:
	virtual void Simulate() override; // vtable[0]

	void CGrabController();
	void OnRestore();
	void ComputeMaxSpeed();
	void TransformAnglesToPlayerSpace();
	void TransformAnglesFromPlayerSpace();
	void DetachEntity();
	void ~CGrabController();
	void SetTargetPosition();
	void AttachEntity();
	void ComputeError();
	void GetSavedMass();
	void UpdateObject();
};
