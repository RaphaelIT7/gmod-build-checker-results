// Generated header
// Estimated minimum size: 0x1C (28) bytes, no debug info available

class CShaderDLL : public IShaderDLLInternal, public IShaderDLL
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1, bool param_2); // vtable[0]
	virtual void Disconnect(bool param_1); // vtable[1]
	virtual void ShaderCount(); // vtable[2]
	virtual void GetShader(int param_1); // vtable[3]
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[4]
	virtual void Disconnect(); // vtable[5]
	virtual void InsertShader(IShader *param_1); // vtable[6]
	virtual void InsertShader(IShader *param_1); // vtable[0]

	CShaderDLL(); // size[136]
};
