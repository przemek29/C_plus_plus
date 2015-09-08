#ifndef TICKET_H
#define TICKET_H

class ticket
{
    public:
	enum typeOfTrain
	{
	    personal, accelerated, hasty, express
	};

	void remember(  const char *sk,
			const char *dok,
			typeOfTrain train,
			int cat = 2
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

inline void ticket::changeTypeOfTrain(typeOfTrain train)
{
    whichTrain = train;
}

#endif
