// Generated header

class Path
{
public:
	virtual void ~Path(); // vtable[0]
	virtual void ~Path(); // vtable[1]
	virtual void GetLength(); // vtable[2]
	virtual void GetPosition(); // vtable[3]
	virtual void GetClosestPosition(); // vtable[4]
	virtual void GetStartPosition(); // vtable[5]
	virtual void GetEndPosition(); // vtable[6]
	virtual void GetSubject(); // vtable[7]
	virtual void GetCurrentGoal(); // vtable[8]
	virtual void GetAge(); // vtable[9]
	virtual void MoveCursorToClosestPosition(); // vtable[10]
	virtual void MoveCursorToStart(); // vtable[11]
	virtual void MoveCursorToEnd(); // vtable[12]
	virtual void MoveCursor(); // vtable[13]
	virtual void GetCursorPosition(); // vtable[14]
	virtual void GetCursorData(); // vtable[15]
	virtual void IsValid(); // vtable[16]
	virtual void Invalidate(); // vtable[17]
	virtual void Draw(); // vtable[18]
	virtual void DrawInterpolated(); // vtable[19]
	virtual void FirstSegment(); // vtable[20]
	virtual void NextSegment(); // vtable[21]
	virtual void PriorSegment(); // vtable[22]
	virtual void LastSegment(); // vtable[23]
	virtual void OnPathChanged(); // vtable[24]
	virtual void Copy(); // vtable[25]
	virtual void ComputeWithOpenGoal(); // vtable[26]
	virtual void ComputeAreaCrossing(); // vtable[27]
	virtual void ResetAge(); // vtable[28]
	virtual void ValidatePath(); // vtable[29]
	virtual void ValidatePathConst(); // vtable[30]

	void Path();
	void ComputePathDetails();
	void InsertSegment();
	void BuildTrivialPath();
	void Optimize();
	void PostProcess();
	void Draw();
};
