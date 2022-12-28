#pragma once
#include "ChoiceMode.h"
#include "TeacherMode.h"
#include "StudentMode.h"
#include "CreatingNewCourse.h"
#include "Course.h"

namespace CourseWork
{
	using namespace System;
	public ref class CurrentApplicationContext : ApplicationContext
	{
	private:
		/*Список окон приложения*/
		static ChoiceMode^ ChoiceModeWin;
		static TeacherMode^ TeacherModeWin;
		static StudentMode^ StudentModeWin;
		static CreatingNewCourse^ CreatingNewCourseWin;

		/*Открытый в приложении курс*/
		static Course^ CurrentCourse;
	public:
		/* Только конструктор по умолчанию. Необходим для передачи объекта методу Application::Run
		 * Перед использованием статических методов обязательно вызвать конструктор.
		 * Повторный вызов конструктора приведет к сбросу статических полей.
		*/
		CurrentApplicationContext();	
		
		/* Следующая группа методов отвечает за показ форм.
		*  Методы, начинающиеся с ShowOnly, вызывают метод HideAllForms, а затем показывают соответствующую форму.
		*/
		//Скрывает от пользователя все окна
		static void HideAllForms();
		static void ShowOnlyChoiceModeWin();
		static void ShowOnlyTeacherModeWin();
		static void ShowOnlyStudentModeWin();
		static void ShowOnlyCreatingNewCourseWin();

		/* 
		*  Следующая группа методов отвечает за работу с курсом.
		*/
		//Загружает курс из файла Path
		static void OpenCourse(System::String^ Path);
		//Сохраняет курс в файл Path
		static void SaveCourse(System::String^ Path);
		//Установить данные о новом курсе
		static void SetNewCourse(Course^ NewCourse);
	};

	
}