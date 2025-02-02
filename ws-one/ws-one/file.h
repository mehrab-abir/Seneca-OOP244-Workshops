#ifndef SENECA_FILE_H_
#define SENECA_FILE_H_

/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and
assignments.

Name: Mehrab Jalil Abir
Student ID: 164479230
Section: NRB
*/

namespace seneca {
	bool openFile(const char filename[]);

	void closeFile();
	
	bool readTitle(char title[]);

	bool readYear(int* year);

	bool readMovieRating(char rating[]);

	bool readDuration(int* duration);

	bool readGenres(char genre[][11]);

	bool readConsumerRating(float* rating);
}
#endif 

