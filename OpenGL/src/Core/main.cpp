#include <Application.h>

int main()
{
	dg::Window window(1280, 720, "Dino Game");
	dg::Application app(window);
	app.Run();

	return EXIT_SUCCESS;
}