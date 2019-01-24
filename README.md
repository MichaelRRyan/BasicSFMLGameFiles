# Instructions for use:
1. Download these files
1. Create a new empty c++ visual studio project
1. Put these files into the project folder
1. Add the files to the project
	1. Right click on the 'Header Files' and 'Source Files' folders from the solution explorer
	1. Mouse over 'Add'
	1. Select 'Existing Item...'
	1. Select and add all three of the files to the correct folders
1. In the visual studio project link SFML
	1. Right click on the project name in the Solution Explorer (Underneath the solution)
	1. Select 'Properties'
	1. Under the 'C/C++' tab add the line "$(SFML_SDK)\include" to the 'Additional Include Directories' at the top of the window
	1. Under the 'Linker' tab add the line "$(SFML_SDK)\lib" to the 'Additional Library Directories' near the centre of the window
1. Make sure the project is in x86 and then run it
1. If it runs and displays a red circle in the centre of the screen, you've set up the project and can begin coding!