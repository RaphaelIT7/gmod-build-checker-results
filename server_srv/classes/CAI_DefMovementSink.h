// Generated header

class CAI_DefMovementSink : public IAI_MovementSink
{
public:
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(); // vtable[1]
	virtual void OnObstructionPreSteer(); // vtable[2]
	virtual void OnFailedSteer(); // vtable[3]
	virtual void OnFailedLocalNavigation(); // vtable[4]
	virtual void OnInsufficientStopDist(); // vtable[5]
	virtual void OnMoveBlocked(); // vtable[6]
	virtual void OnMoveStalled(); // vtable[7]
	virtual void OnMoveExecuteFailed() override; // vtable[8]
};
