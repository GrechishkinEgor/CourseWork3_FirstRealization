#pragma once
#include "Course.h"
#include "ChoiceMode.h"
#include "TeacherMode.h"
#include "StudentMode.h"
#include "CreatingNewCourse.h"
#include "TeacherCourseView.h"
#include "CourseSettings.h"
#include "PasswordCheck.h"
#include "CreatingNewTest.h"
#include "ChangeTeacherPassword.h"
#include "EditChoiceFewAnswer.h"
#include "StudentCourseView.h"
#include "TestView.h"
#include "StudentTaskView.h"
#include "StartTest.h"
#include "TestResult.h"
#include "TaskResult.h"

/*Текущий контекст приложения (ApplicationContext).
* Все имеющиеся в проекте формы подключаются в этот заголовочный файл.
* Данный заголовочный файл подключается ко всем файлам cpp, реализующим методы форм.
* Для запуска приложения через Application::Run один раз вызывается единственный конструктор ApplicationContext.
* Созданный объект передается как аргумент в метод Run.
* Отображение стартовой формы прописывается в конструкторе.
* Формы, которые отображаются модально (через метод ShowDialog), не включаются в список статических полей контекста.
* Остальные формы всегда имеют один экземпляр, ссылка на который хранится в статическом поле.
* Действие метода HideAllForms распространяется только на немодальные формы.
* Немодальные формы выводятся на экран при помощи методов, начинающихся с ShowOnly (все такие методы вызывают HideAllForms).
* При необходимости методы ShowOnly создают новый экземпляр формы.
* Помимо форм контекст хранит данные об открытом курсе и полном имени файла с курсом.
* Любая форма может воспользоваться методами, влияющими на текущий курс
*/
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
		static TeacherCourseView^ TeacherCourseViewWin;
		static StudentCourseView^ StudentCourseViewWin;

		/*Открытый в приложении курс*/
		static Course^ CurrentCourse;
		static String^ Path;			//Файл с курсом
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
		static void ShowOnlyTeacherCourseViewWin();
		static void ShowOnlyStudentCourseViewWin();

		/* 
		*  Следующая группа методов отвечает за работу с курсом.
		*/
		//Загружает курс из файла Path
		static void OpenCourse(System::String^ Path);
		//Сохраняет курс в файл Path
		static void SaveCourse(System::String^ Path);
		//Установить данные о новом курсе
		static void SetNewCourse(Course^ NewCourse);
		//Получить данные о текущем курсе
		static Course^ GetCourse();
		//Получить путь файла с курсом ("", если файла нет)
		static String^ GetPath();
		//Проверка пароля преподавателя. Истина - пароль верный
		static bool CheckTeacherPassword(String^ Password);
	};

	
}