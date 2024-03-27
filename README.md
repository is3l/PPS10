# PPS10

![Language](https://img.shields.io/badge/language-Python%203-orange.svg)

## :mag_right: Documentation

The documentation for this project uses the [*doxygen*](https://www.doxygen.nl/) generator tool to maintain code legibility, inform about technical specifications and clarify module relationships. The tool achieves this by extracting information from specially-formatted comments within the code, with which it hierarchizes code structure. Cross referencing is also possible, so the reader may easily refer to the code from the documentation and vice-versa.

While *doxygen* accepts several different syntaxes, here we specify a single way to be used for each language, in order to maintain consistency accross developer cells. 

<details>
    <summary> Header Syntax </summary>
    
  The start of a file should include a header with appropriate information regarding its author, brief description and associated license at least. Other sections found pertinent may also be added.
  
  ### C++
  ```cpp
  /**
   * @file
   * @author  John Doe <jdoe@example.com>
   * @version 1.0
   * @brief Example C++ program with Doxygen style comments.
   *
   * @section LICENSE
   *
   * This program is free software...
   *
   * @section DESCRIPTION
   *
   * This specifies a class which represents a moment of time...
   *
   * ...etc...
   */
  ```
  ### Python
  ```python
  ## @file doxygen_example.py
  # @author John Doe <jdoe@example.com>
  # @brief Example Python program with Doxygen style comments.
  #
  # @section LICENSE
  #
  # This program is free software...
  # 
  # @section DESCRIPTION
  #
  # This specifies a class which represents a moment of time...
  #
  # ...etc...
  ```

  As can be seen, *C++* documentation syntax uses an extra asterisk after the leading comment delimiter '/*' to open an explanatory block. While the mark at the start of each block line, as in space-asterisk-space, is not necessary, it is good practice to use it in order to retain legibility. As for *Python*, the explanatory block begins with a double character '##' to tell *doxygen* to parse this area, and each following line begins with a single '#'. Additionally, the symbol '@' is used to mark specific command identifiers (e.g. param for parameters), in both languages. These are meant to provide the parser with further instructions.

</details>

<details>
    <summary> General Syntax </summary>
    
  Subsequent to the file header block, *doxygen* syntax encompasses markup of data structures and code modules specifying the purpose of the entity, associated parameters and any possible values to be passed on in return. The syntax here follows the same methodology used for file headers.
  
  ### C++
  ```cpp
  /**
   * <A short one line description>
   *
   * <Longer description which may span multiple lines or paragraphs as needed>
   *
   * @param  Description of method's or function's input parameter
   * @param  ...
   *
   * @return Description of the return value
   */
  ```
  ### Python
  ```python
   ## <A short one line description>
   #
   # <Longer description which may span multiple lines or paragraphs as needed>
   #
   # @param  Description of method's or function's input parameter
   # @param  ...
   #
   # @return Description of the return value
  ```

</details>

<details>
    <summary> Installation </summary>

  Installation of the *doxygen* tool can be made simple by using the pre-compiled [binaries](https://www.doxygen.nl/download.html#srcbin) made available by the developer team. As for *Windows* or *Mac* operating systems, this encompasses simply following standard installation procedure with the *.exe* or *.dmg* files, respectively. As for *Linux* based systems, installation will depend on the distro used. For *Ubuntu*, one may install the *doxygen* version available through aptitude:
  ```
  sudo apt-add-repository universe
  sudo apt-get update
  sudo apt-get install doxygen
  ```
  Other distros may require compillation from the available tar [ball](https://www.doxygen.nl/download.html#srcbin).

</details>

<details>
    <summary> Usage </summary>

  In order to effectively generate documentation, *doxygen* requires the use of a configuration file. This file is named Doxyfile and is where project information is specified. It is also where we tell *doxygen* how to parse the code. This is achieved through directives regarding the project information, text formatting, code specifications and others. Each directive is accompanied by a brief description in the Doxyfile. Some examples:

  ```
  DOXYFILE_ENCODING      = UTF-8
  PROJECT_NAME           = "My Project"
  PROJECT_NUMBER         =  
  ...
  INLINE_GROUPED_CLASSES = NO
  INLINE_SIMPLE_STRUCTS  = NO
  ...
  LOOKUP_CACHE_SIZE      = 0
  NUM_PROC_THREADS       = 1
  EXTRACT_ALL            = NO  
  ...
  ```
  After navigating to the project directory, the Doxyfile may be generated using the following command:

  ```
  doxygen -g
  ```
  Once the Doxyfile is ready and appropriate markup has been added to the code, documentation can be promptly generated by simply calling *doxygen* also within the project directory:
  ```
  doxygen Doxyfile
  ```

  While running, *doxygen* will display any warnings or errors associated with the documentation generation. Once complete, a directory should have been created containing all the documentation in whichever format chosen for your project, such as HTML or PDF.

</details>

## Contribution
 If you have any issue or want **help**, please send an e-mail to is3l@isr.uc.pt

# License
 * Distributed under the Apache-2.0 license license. See [LICENSE](https://github.com/is3l/PPS10/tree/main?tab=Apache-2.0-1-ov-file) for more information.
