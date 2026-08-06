// Generated header

class IVP_Object
{
public:
	virtual ~IVP_Object(); // vtable[0]
	virtual ~IVP_Object(); // vtable[1]

	IVP_Object(IVP_Cluster *param_1, IVP_Template_Object *param_2); // size[89]
	IVP_Object(IVP_Environment *param_1); // size[35]
	void init(IVP_Environment *param_1); // size[29]
	void set_type(IVP_OBJECT_TYPE param_1); // size[14]
	void get_type(); // size[11]
	void get_name(); // size[11]
	void get_environment(); // size[11]
	void to_poly(); // size[8]
	void to_cluster(); // size[8]
	void to_real(); // size[8]
	void to_ball(); // size[8]
};
