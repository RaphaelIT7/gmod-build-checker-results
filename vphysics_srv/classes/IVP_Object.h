// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Object
{
public:
	virtual ~IVP_Object(); // vtable[0]
	virtual ~IVP_Object(); // vtable[1]

	IVP_Object(IVP_Cluster *param_1, IVP_Template_Object *param_2); // size[96]
	IVP_Object(IVP_Environment *param_1); // size[54]
	void init(IVP_Environment *param_1); // size[44]
	void set_type(IVP_OBJECT_TYPE param_1); // size[4]
	void get_type(); // size[4]
	void get_name(); // size[5]
	void get_environment(); // size[5]
	void to_poly(); // size[4]
	void to_cluster(); // size[4]
	void to_real(); // size[4]
	void to_ball(); // size[4]
};
