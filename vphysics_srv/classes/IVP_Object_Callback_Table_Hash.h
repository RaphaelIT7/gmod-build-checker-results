// Generated header

class IVP_Object_Callback_Table_Hash : public IVP_VHash
{
public:
	virtual void compare(void *param_1, void *param_2) override; // vtable[0]
	virtual ~IVP_Object_Callback_Table_Hash(); // vtable[1]
	virtual ~IVP_Object_Callback_Table_Hash(); // vtable[2]

	_GLOBAL__sub_I_~IVP_Object_Callback_Table_Hash(); // size[1]
	void object_to_index(IVP_Real_Object *param_1); // size[56]
	void add_table(IVP_Object_Callback_Table *param_1); // size[86]
	void remove_table(IVP_Real_Object *param_1); // size[110]
	void find_table(IVP_Real_Object *param_1); // size[110]
	IVP_Object_Callback_Table_Hash(intparam_1); // size[33]
};
