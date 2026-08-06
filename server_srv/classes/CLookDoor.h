// Generated header

class CLookDoor : public CFuncMoveLinear
{
public:
	virtual ~CLookDoor() override; // vtable[0]
	virtual ~CLookDoor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void MoveThink(); // size[758]
	void InputInvertOff(inputdata_t *param_1); // size[53]
	void InputInvertOn(inputdata_t *param_1); // size[53]
	void GetBaseMap(); // size[10]
};
