# PPS10

![Language](https://img.shields.io/badge/language-Swift%203-orange.svg)

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

  Installation of the *doxygen* tool can be made simple by using the pre-compiled [binaries](https://www.doxygen.nl/download.html#srcbin) made available by the developer team. 

</details>


## Contribution
 If you have any issue or want **help**, please send an e-mail to is3l@isr.uc.pt

# License
 * Distributed under the Apache-2.0 license license. See [LICENSE](https://github.com/is3l/PPS10/tree/main?tab=Apache-2.0-1-ov-file) for more information.
