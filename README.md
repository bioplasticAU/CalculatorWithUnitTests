# Calculator With Unit Tests



Use the Microsoft Native Unit Test Framework. It is built directly into Visual Studio 2022, requiring no extra libraries or complex configuration. 

**1. Create a Test Project** 

Right-click your Solution in the Solution Explorer and select Add > New Project.

Filter by C++ and search for "test".

Select Native Unit Test Project. 

**2. Connect Your Code**



**Add Reference**: Right-click the Test Project > Add > Reference and check your main project.

Include Headers: In the test file (e.g., unittest1.cpp), add #include "../YourProject/YourHeader.h".

Linker Settings: If you get "unresolved external symbol" errors, right-click the Test Project > Properties > Linker > Input. Add the path to your main project's .obj or .lib file in Additional Dependencies. 



To resolve "unresolved external symbol" (LNK2019) errors, you need to tell the Test Project where to find the compiled code from your Main Project.

1\. Tell the Linker What to Include

Right-click your Test Project in the Solution Explorer and select Properties.

Navigate to Configuration Properties > Linker > Input.

In the Additional Dependencies row, click the dropdown at the far right and select Edit.

Type the name of the .obj file containing your logic (e.g., Calculator.obj) or the .lib file if your main project is a library.

Note: Do not include the full path here; **just the filename**. 

2\. Tell the Linker Where to Look

Still in Properties, go to Configuration Properties > Linker > General.

Find Additional Library Directories, click the dropdown, and select Edit.

Add the path to your main project's build folder (where the .obj files are generated).

Common path: e.g., ProjectName/obj/Debug/  : "C:\\Users\\alex.p\\source\\repos\\Calculator\\Calculator\\x64\\Debug"

3\. Verify Header Paths

If the compiler (not the linker) can't find your .h files, fix it here:

Go to Configuration Properties > VC++ Directories > Include Directories.

Click Edit and add the directory containing your main project's headers. 

Teaching Tip: Avoid linking .obj files that contain a main() function (like main.obj), as this will cause "multiply defined symbol" errors because the test project has its own entry point. 



**MAKE IT RUN TEST AFTER BUILD**



How to Enable "Run Tests After Build"

This is the easiest way to give students instant feedback every time they compile.

Open the Test Explorer window (Test > Test Explorer or Ctrl + E, T).

Click the Settings icon (a small gear) on the Test Explorer toolbar.

Select Run Tests After Build from the dropdown menu. 

Once enabled, every successful build (e.g., when you press Ctrl + Shift + B) will trigger all discovered tests to run immediately. 



