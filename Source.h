#ifndef Source_h
#define Source_h
class fun {
protected:
	float x;
public:
	virtual void result() = 0;
	virtual void derivative() = 0;
};
class arcsin : public fun {
public:
	arcsin(float x1);
	void result();
	void derivative();
};
class arccos :public fun {
public:
	arccos(float x1);
	void result();
	void derivative();
};
#endif
