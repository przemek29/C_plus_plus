#ifndef BILET_H
#define BILET_H

class bilet
{
    public:
	enum typeOfTrain
	{
	    personal, akcelerated, hasty, express
	};

	void remember(  const char *sk,
			const char *dok,
			typeOfTrain train,
			int cl = 2
		      );

	void changeTypeOfTrain(typeOfTrain);
	void print();

    private:
	char from[80];
	char where[80];
	int category;
	typeOfTrain whichTrain;
	const char *descriptionType();
};

inline void bilet::changeTypeOfTrain(typeOfTrain)
{
    whichTrain = train;
}

#endif
