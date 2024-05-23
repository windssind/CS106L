'''
Hey friend! Glad you're curious about this, but please don't touch this file :>)
'''

from csv_utils import *
import os

def main():
  # fstream writing tests!
  binary_to_csv("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_not_offered.bin", "/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_not_offered.csv")
  binary_to_csv("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_offered.bin", "/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_offered.csv")
  assert files_are_equal("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_offered.csv", "/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/student_output/courses_offered.csv"), "write_courses_offered test failed "
  assert files_are_equal("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_not_offered.csv", "/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/student_output/courses_not_offered.csv"), "write_courses_not_offered test failed "
  os.remove("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_not_offered.csv")
  os.remove("/home/winds/Documents/CS106L/Assignment/simpleenroll_starter/simpleenroll_starter/utils/courses_offered.csv")
  print("Congratulations, your code passes all the autograder tests! ")

main()