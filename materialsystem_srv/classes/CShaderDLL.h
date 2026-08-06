// Generated header

class CShaderDLL : public IShaderDLLInternal, public IShaderDLL
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1, boolparam_2) override; // vtable[0]
	virtual void Disconnect(boolparam_1); // vtable[1]
	virtual void ShaderCount(); // vtable[2]
	virtual void GetShader(intparam_1) override; // vtable[3]
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[4]
	virtual void Disconnect(); // vtable[5]
	virtual void InsertShader(IShader *param_1); // vtable[6]

	CShaderDLL(); // size[136]
	void InsertShader(IShader *param_1); // size[10]
};
