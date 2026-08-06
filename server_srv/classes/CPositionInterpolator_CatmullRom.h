// Generated header

class CPositionInterpolator_CatmullRom : public IPositionInterpolator
{
public:
	virtual void Release(); // vtable[0]
	virtual void GetDetails(char * *param_1, int *param_2, int *param_3); // vtable[1]
	virtual void SetKeyPosition(int param_1, Vector *param_2); // vtable[2]
	virtual void InterpolatePosition(float param_1, Vector *param_2); // vtable[3]
	virtual void ProcessKey(char *param_1, char *param_2) override; // vtable[4]
};
