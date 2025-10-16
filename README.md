# C-to-Python

Various examples and short exercises on bridging Python and compiled code
  
I estimated pi using a monte carlo approximation method with numpy. Numpy vectorized the method, so rather than throwing one point at once and checking if it falls in the area it throws and evaluates all points at once. This method falls in between the run time of findPi in Python and findPi in C. Numpy method was about 4.5x faster than python code (2.54s to 11.6s) but about 2.3x slower than the C++ version (2.54s to 1.09s). Furthermore, all three methods pproximation for pi was very close to actual value of pi ≈ 3.14159265 and the most accurate was my implementation of numpy and monte carlo approximation followed by C++ version and last being the python version. 

findPi C++ -->     1.09s and Estimate for pi: 3.14147804
Numpy/Mine -->     2.54s and Estimate for pi: 3.14148436
findPi Python -->  11.6s and Estimate for pi: 3.14146184
