#include<iostream>

using namespace std;

struct date
{
	int day;
	int month;
	int year;
};

struct DOB
{
	date date_dob;
};

struct DOG 
{
	date date_dog;
};

struct name
{
	char f_name[10];
	char l_name[10];
};

struct student
{
	name S_name;
	name F_name;
	long int CNIC;
	DOB S_dob;
	long int ID;
	char DEPT_name[10];
	date S_dog;
};

struct course
{
	char title[10];
	long int id;
	char C_DEPT_name;
	name T_name;
};

//above are the used structs for execution of this code

int main()
{
	cout<<"project_sp_home_prac/in sp folder"<<endl;
	int s_var;
	int pass=0;
	int temp_pass;
	int i=1;
	cout<<"pls enter 1 for advisor and 2 for student "<<endl;
	cin>>s_var;
	switch(s_var)
	{
		case 1:
		{
			cout<<"pls enter a password to register"<<endl;
			cin>>pass;
			cout<<"thank you for registeration"<<endl;
			while(i!=0)
			{
				cout<<"pls enetr enter the password"<<endl;
				cin>>temp_pass;
				if(pass==temp_pass)
				{
					cout<<"access granted"<<endl;
					cout<<"press 1 to enter in student section of console or 2 for course section"<<endl;
					cin>>s_var;
					switch(s_var)
					{
						case 1:
						{
							cout<<"welcome to student section"<<endl;
							cout<<"press 1 to create student press 2 to edit student press 3 to delete student press 4 to display student press 5 to serach student "<<endl;
							cin>>s_var;
							switch(s_var)
							{
								case 1:
								{
									//creat student
									break;
								}
								case 2:
								{
									//edit student
									break;
								}
								case 3:
								{
									//delete student
									break;
								}
								case 4:
								{
									//display student
									break;
								}
								case 5:
								{
									//student search
									cout<<"press 1 to search by id, press 2 to search by name, press 3 to search by dept, press 4 to search by CNIC"<<endl;
									cin>>s_var;
									switch(s_var)
									{
										case 1:
										{
											//search by id
											break;
										}
										case 2:
										{
											//search by name
											break;
										}
										case 3:
										{
											//search by dept
											break;
										}
										case 4:
										{
											//search by CNIC
											break;
										}
										default:
											cout<<"oops something is wrong"<<endl;
									}
									break;
								}
								default:
									cout<<"oops something went wrong, line : 67"<<endl;
							break;
						}
						case 2:
						{
							cout<<"welcome to course section"<<endl;
							cout<<"press 1 to create course press 2 to edit course press 3 to delete course press 4 to display courses press 5 to serach course "<<endl;
							cin>>s_var;
							switch(s_var)
							{
								case 1:
								{
									//create course
									break;
								}
								case 2:
								{
									//edit course
									break;
								}
								case 3:
								{
									//delete course
									break;
								}
								case 4:
								{
									//display courses
									break;
								}
								case 5 :
								{
									//search course
									cout<<"press 1 to search by id, press 2 to search by title, press 3 to search by dept"<<endl;
									cin>>s_var;
									switch(s_var)
									{
										case 1:
										{
											//search by id
											break;
										}
										case 2:
										{
											//search by title
											break;
										}
										case 3:
										{
											//search by dept
											break;
										}
										default:
											cout<<"opos something went wrong"<<endl;
									}
									break;
								}
								default:
									cout<<"oops something went wrong"<<endl;
								}
							}
							break;
						}
						default:
							cout<<"oops something went wrong, line: 38 "<<endl;
						break;
					}
				}
				else
					cout<<"wrong input"<<endl;
				break;
				cout<<"pls enter 0 to get out of this console or 1 to perform another task"<<endl;
				cin>>i;
			}
			break;
		}		
		case 2:
		{
			cout<<"welcome to student console"<<endl;
			cout<<"press 1 to add course, press 2 to remove course, press 3 to search course"<<endl;
		cin>>s_var;
		switch(s_var)
		{
			case 1:
			{
				//add course
				break;
			}
			case 2:
			{
				//remove course
				break;
			}
			case 3:
			{
				//search course
				cout<<"welcome to courses search console"<<endl;
				cout<<"press 1 to search course by title, press 2 to search course by id, press 3 to search course by teacher name "<<endl;
				cin>>s_var;
				switch(s_var)
				{
					case 1:
					{
						//search by course title
						break;
					}
					case 2:
					{
						//search by course id
						break;
					}
					case 3:
					{
						//search by course by teach_name
						break;
					}
					default:
						cout<<"oops something went wrong"<<endl;
				}
				break;
			}
			default:
				cout<<"oops something went wrong"<<endl;
			break;
		}
		default:
			cout<<"oops something went wrong: line 18"<<endl;
		}
	}
	return 0;
}