
Chapter 25. A 3D Maze

From:
  Killer Game Programming in Java
  Andrew Davison
  O'Reilly, May 2005
  ISBN: 0-596-00730-2
  http://www.oreilly.com/catalog/killergame/
  Web Site for the book: http://fivedots.coe.psu.ac.th/~ad/jg

Contact Address:
  Dr. Andrew Davison
  Dept. of Computer Engineering
  Prince of Songkla University
  Hat Yai, Songkhla 90112, Thailand
  E-mail: ad@fivedots.coe.psu.ac.th



If you use this code, please mention my name, and include a link
to the book's Web site.

Thanks,
  Andrew


============================

There are two maze generation applications here:
   * MazeMaker (not described in the chapter)
   * MazeGen (described in this chapter)

The maze files generated must be moved to the Maze3D directory
in order to be used.

----------------------------
1.  MazeMaker.java

Compilation:
$ javac MazeMaker.java

Execution: takes an optional filename where the maze
will be stored; the default filename is maze.txt

$ java MazeMaker
     - means that the maze is stored to maze.txt



----------------------------
2.  MazeGen.java


Compilation:
$ javac MazeGen.java

(This will also compile RandomInRange.java, if necessary.)

-----
Execution: 

The application takes 0, 2, or 3 arguments which specify the width, rows, 
and output filename of the maze. 

BNF Format:
java MazeGen [ mazeWidth mazeRows [ mazeFileName ] ]

([...] means that the "..." part is optional )

e.g.

$ java MazeGen
    - the default values will be used to make a maze of 
      41x41 cells, saved to maze.txt


$ java MazeGen 21 7
    - a maze of 21 cells width, 7 rows will be saved 
       to maze.txt


(Note that the width and row values must be odd numbers.)

---------
Last updated: 19th April 2005

