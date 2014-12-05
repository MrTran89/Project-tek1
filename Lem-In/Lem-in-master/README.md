PLEASE READ ME FIRST !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

All lib function you have to put this one in lib/ folder, for example my_strcmp you have to put this one in lib/ folder

If you lib function has a .h file, put this one in include/ folder

NOTE: One function per file. For example, if you want to create a function to get ants,
You have to create a file get_ants.c, and in this file, you must to have a function which has a same name than your file (here for get_ants function)
All sub-functions about this one, you must to put this in the same file

For example, in my get_ants function I need a function which one will parse a data file to get a number of ants, I have to create another function to parse file in the same file.
And this function will be named, for example: get_ants_in_file();