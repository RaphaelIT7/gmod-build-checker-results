// Generated header

class IVP_U_Active_Terminal_Int : public IVP_U_Active_Int, public IVP_U_Active_Int_Delayed
{
public:
	virtual ~IVP_U_Active_Terminal_Int() override; // vtable[0]
	virtual ~IVP_U_Active_Terminal_Int() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void update_int(); // vtable[3]
	virtual void set_int(int param_1, IVP_BOOL param_2); // vtable[4]

	void update_int(); // size[31]
	IVP_U_Active_Terminal_Int(char *param_1, int param_2); // size[95]
	~IVP_U_Active_Terminal_Int(); // size[68]
	~IVP_U_Active_Terminal_Int(); // size[78]
};
